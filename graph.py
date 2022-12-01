
import matplotlib.pyplot as plt
import numpy as np
 
X, Y = np.loadtxt('data.txt', delimiter=',', unpack=True)
 
plt.scatter(X, Y, 1)
plt.title('Pythagorean Algorithm')
plt.xlabel('X')
plt.ylabel('Y')
plt.show()