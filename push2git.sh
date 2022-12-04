echo "
# CompositionEmployee
(Composition as an Alternative to Inheritance) Many programs written with inheritance
could be written with composition instead, and vice versa. Rewrite class BasePlusCommissionEmployee
of the CommissionEmployee–BasePlusCommissionEmployee hierarchy to use composition
rather than inheritance. After you do this, assess the relative merits of the two approaches for 
designing classes CommissionEmployee and BasePlusCommissionEmployee, as well as for object-oriented 
programs in general. Which approach is more natural? Why?
" > README.md
git init
git add README.md
git add .
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/biomds/CompositionEmployee.git
git push -u origin main
