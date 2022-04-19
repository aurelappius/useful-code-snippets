from sympy import symbols, Eq, solve
from cmath import pi

# define known variables
P = 5000
E = 210000000
a = 0.5
rho = 7.85*1000
g = 9.81

# initialize unknown variables
x = symbols('x')

# define equation variables Eq(lefthandside,righthandside)
equation = Eq(((3*(a**3)*pi*(80*a*rho*g*pi*(x**2)+57*x)) /
               (2*E*(9*(pi**2)-64)*x**4)), x/10)

# solve eqation
result = solve((equation), (x))

# print all results
print(result)
# print only first result
print(result[0])
