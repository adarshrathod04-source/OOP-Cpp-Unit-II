 Object Oriented Programming with C++ – Unit II: Inheritance

Student Information

Field                                                 Details

Student Name                                         Adarsh Rathod                                      

ZPRN                                                 125UAD1148

Class / Division                                     SY-B.Tech / A

Course Name                                         Object Oriented Programming with C++

Unit                                                Unit II – Inheritance

Academic Year                                       2026–27

Department                                          AI & DS

College                                            Zeal College of Engineering and Research, Narhe, Pune

About the Unit

This README contains the C++ programs for Unit II – Inheritance, based on the uploaded inheritance study material. The material covers base and derived classes, protected members, constructors and destructors, overriding member functions, class hierarchies, public/private inheritance, types of inheritance, multiple-inheritance ambiguity, virtual base classes, and abstract classes.

List of Programs

1. Basic Inheritance – Rectangle and Cuboid

Demonstrates a base class Rectangle and derived class Cuboid. The derived class reuses length and breadth and adds height.

Concept: Base class, derived class, inheritance, code reusability.

2. Constructor in Base and Derived Class

Shows the order of constructor execution when a derived-class object is created. The base constructor executes before the derived constructor.

Concept: Constructors in inheritance.

3. Parameterized Constructor

Demonstrates passing values to constructors during object creation and initializing class data members.

Concept: Parameterized constructors and initialization.

4. Derived Constructor Calling Base Constructor

Shows how a derived constructor calls a parameterized base constructor using a constructor initializer list.

Concept: Constructor chaining and initializer list.

5. Function Overriding

Demonstrates a derived class providing its own implementation of a function already present in the base class.

Concept: Overriding member functions.

6. Calling Base Function Using Scope Resolution

Shows how to call the original base-class version of an overridden function using Base::function().

Concept: Scope-resolution operator and overriding.

7. IS-A Relationship

Demonstrates an inheritance-based relationship such as Car IS-A Vehicle.

Concept: IS-A relationship.

8. HAS-A Relationship

Demonstrates object composition, such as a Car containing an Engine object.

Concept: HAS-A relationship / composition.

9. Single / Simple Inheritance

Shows one derived class inheriting from one base class, such as Person → Student.

Concept: Single inheritance.

10. Multilevel Inheritance

Shows inheritance through multiple levels: Person → Employee → Manager.

Concept: Multilevel inheritance.

11. Hierarchical Inheritance

Shows multiple derived classes inheriting from one common base class: Person → Student and Person → Teacher.

Concept: Hierarchical inheritance.

12. Multiple Inheritance

Shows one derived class inheriting from two base classes, such as Person + Employee → Teacher.

Concept: Multiple inheritance.

13. Multiple Inheritance Ambiguity

Demonstrates ambiguity when two base classes have functions with the same name. The ambiguity is resolved using the scope-resolution operator.

Example: obj.Person::show();

Concept: Multiple-inheritance ambiguity.

14. Multipath / Diamond Inheritance

Demonstrates the diamond problem, where a common base class is reached through two inheritance paths.

Concept: Multipath / diamond inheritance.

15. Virtual Base Class

Uses virtual inheritance to ensure that only one shared copy of the common base class exists in a diamond hierarchy.

Example: class Teacher : virtual public Person

Concept: Virtual base class and diamond-problem solution.

16. Public Inheritance

Demonstrates public inheritance and its effect on accessibility. Base public members remain public and protected members remain protected.

Concept: Public inheritance and access control.

17. Protected and Private Inheritance

Demonstrates how protected and private inheritance change the accessibility of inherited public and protected members.

Concept: Protected inheritance, private inheritance, access control.

18. Abstract Class and Pure Virtual Function

Demonstrates an abstract Shape class containing a pure virtual area() function, with Rectangle and Circle providing implementations.

Important syntax:

virtual void area() = 0;

Concept: Abstract class, pure virtual function, overriding.

Inheritance Type Summary

Type                              Structure                           Example

Single                             A → B                               Person → Student

Multilevel                         A → B → C                           Person → Employee → Manager

Hierarchical                      A → B, C                             Person → Student, Teacher

Multiple                          A + B → C                            Person + Employee → Teacher

Hybrid                           Combination of inheritance types      Combined hierarchy

Multipath / Diamond              Common base through multiple paths    Person → Student/Teacher → School

Important C++ Syntax

Basic inheritance

class Derived : public Base
{
};

Protected inheritance

class Derived : protected Base
{
};

Private inheritance

class Derived : private Base
{
};

Virtual inheritance

class Derived : virtual public Base
{
};

Calling a base-class function

Base::functionName();

Pure virtual function

virtual void functionName() = 0;


Learning Outcomes

After completing these programs, students should be able to:

1.Explain inheritance and its purpose.

2.Identify base and derived classes.

3.Understand code reusability.

4.Explain IS-A and HAS-A relationships.

5.Implement different types of inheritance.

6.Understand constructor execution in inheritance.

7.Implement function overriding.

8.Resolve ambiguity in multiple inheritance.

9.Explain the diamond problem.

10.Use virtual inheritance.

11.Understand public, protected, and private inheritance.

12.Explain abstract classes and pure virtual functions.


Course Reference

Course: Object Oriented Programming with C++

Unit: Unit II – Inheritance

Class: SY-B.Tech

Department: AI & DS

Academic Year: 2026–27

Course Faculty: Mr. Chandan Prasad

College: Zeal College of Engineering and Research, Narhe, Pune
