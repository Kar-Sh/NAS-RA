import itertools

def is_satisfiable(expression):
    variables = set()
    for char in expression:
        if char.isalpha():
            variables.add(char)

    for values in itertools.product([True, False], repeat=len(variables)):
        assignment = dict(zip(variables, values))
        if eval(expression, assignment):
            return True
    return False

# Example usage
logical_expression = "(A and B) or (not A and C)"
print("Logical Expression:", logical_expression)
print("Is Satisfiable?", is_satisfiable(logical_expression))
