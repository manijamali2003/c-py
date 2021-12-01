import subprocess

f = open('main.py','r')
strv = f.read().replace('\n',';')
f.close()

# add ';' to all lines

strv1 = strv.split(';')
strv4 = ''
for i in strv1:
    if not i=='':
        strv2 = i.split(' ')
        strv3 = ''
        for j in strv2:
            if j.endswith(':int'): j=f"int {j}".replace(':int','')
            if j.endswith(':str'): j=f"string {j}".replace(':str','')
            if j.endswith(':bool'): j=f"bool {j}".replace(':bool','')
            if j.endswith(':float'): j=f"float {j}".replace(':float','')
            if 'True' in j: j = j.replace('True','true')
            if 'False' in j: j = j.replace('False','false')
            if strv3=='':
                strv3+=j
            else:
                strv3+=" "+j
        
        strv3+=';'
        strv4+=strv3


f = open('main.cpp','w')
f.write ('#include "python.hpp"\nusing namespace std;int main (){')
f.write(strv4)
f.write('return 0;}')
f.close()

subprocess.call(['g++','main.cpp','-o','main.pyc'])
subprocess.call(['./main.pyc'])
