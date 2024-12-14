from datetime import date

# Fecha de nacimiento
birth_date = date(1990, 12, 15)
# Fecha actual
today = date.today()

# Cálculo de la edad
age = today.year - birth_date.year - ((today.month, today.day) < (birth_date.month, birth_date.day))
print("Edad:", age)
