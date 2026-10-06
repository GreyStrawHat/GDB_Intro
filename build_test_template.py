"""
CUnit Test Template Generation

This is a simple module designed to demonstrate the basic 
template generating functionality of the mako library.
"""

from mako.template import Template

template_obj = Template(filename="./tests_template.mako")
print(template_obj.render())
