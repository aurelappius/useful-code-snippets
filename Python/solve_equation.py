from sympy import symbols, Eq, solve
from cmath import pi

# define known variables
P = 5000
E = 210000000
a = 0.5
rho = 7.85*1000
g = 9.81

# initialize unknown variables
R = symbols('R')

# define equation variables
v2 = Eq(((3*(a**3)*pi*(80*a*rho*g*pi*(R**2)+57*P)) /
        (2*E*(9*(pi**2)-64)*R**4)), R/10)

# solve eqation
result = solve((v2), (R))

# print all results
print(result)
# print only first result
print(result[0])
