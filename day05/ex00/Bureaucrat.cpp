#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :
_name("Default"),
_grade(150) {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) :
_name(name)
{
    this->setGrade(grade);
}

void        Bureaucrat::setGrade(int grade)
{
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else
            _grade = grade;
    }
    catch(GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
    *this = copy;
}

Bureaucrat      &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    _grade = rhs._grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {
}

std::string const   Bureaucrat::getName()
{
    return _name;
}

int                 Bureaucrat::getGrade()
{
    return _grade;
}

void                Bureaucrat::increaseGrade()
{
    this->setGrade(_grade - 1);
}

void                Bureaucrat::decreaseGrade()
{
    this->setGrade(_grade + 1);
}