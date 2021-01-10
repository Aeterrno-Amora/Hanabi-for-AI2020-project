import numpy as np
import matplotlib.pyplot as plt

with open('train.out', 'r') as f1:
    list1 = f1.readlines()
a = []
for i in range(0, len(list1)):
    list1[i] = list1[i].strip('\n')
    a.append(float(list1[i]))
    print(i, list1[i])

plt.plot(a)
plt.show()
