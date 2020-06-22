from mpl_toolkits import mplot3d
import matplotlib.pyplot as plt

fig = plt.figure
ax = plt.axes(projection='3d')

f1 = open("logObj1.txt", 'r')
f2 = open("logObj2.txt", 'r')
f3 = open("logObj3.txt", 'r')

coords = []

line = f1.readlines()
for i in line:
    x = i.split(' ')
    coords.append(x)

for i in coords:
    i[2] = i[2][:-2]

for i in coords:
    i[0] = float(i[0])
    i[1] = float(i[1])
    i[2] = float(i[2])


    x_set_1 = []
    y_set_1 = []
    z_set_1 = []
for i in coords:
    x_set_1.append(i[0])
    y_set_1.append(i[1])
    z_set_1.append(i[2])

line = []
coords = []

line = f2.readlines()
for i in line:
    x = i.split(' ')
    coords.append(x)

for i in coords:
    i[2] = i[2][:-2]

for i in coords:
    try:
        i[0] = float(i[0])
        i[1] = float(i[1])
        i[2] = float(i[2])
    except:
        i[2] = 0
    
    x_set_2 = []
    y_set_2 = []
    z_set_2 = []
for i in coords:
    x_set_2.append(i[0])
    y_set_2.append(i[1])
    z_set_2.append(i[2])

line = []
coords = []

line = f3.readlines()
for i in line:
    x = i.split(' ')
    coords.append(x)

for i in coords:
    i[2] = i[2][:-2]

for i in coords:
    try:
        i[0] = float(i[0])
        i[1] = float(i[1])
        i[2] = float(i[2])
    except:
        i[2] = 0
    
    x_set_3 = []
    y_set_3 = []
    z_set_3 = []
for i in coords:
    x_set_3.append(i[0])
    y_set_3.append(i[1])
    z_set_3.append(i[2])

print(x_set_3)

ax.scatter3D(x_set_1,y_set_1,z_set_1,cmap = 'Greens')
ax.scatter3D(x_set_2,y_set_2,z_set_2,cmap = 'Reds')
ax.scatter3D(x_set_3,y_set_3,z_set_3,cmap = 'Blues')

plt.show()