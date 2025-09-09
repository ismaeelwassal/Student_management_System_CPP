# 🎓 **Student Registration System**

This Student Registration System is a console-based C++ application designed to manage students, courses, and their enrollments efficiently.  
It simulates key functionalities of a real-world academic registration system, allowing users to register students, add courses, and handle enrollment operations seamlessly.  

---

## ✨ **Features**

### 👩‍🎓 **Student Management**
- Add students with details such as **ID, Name, National ID, Phone Number, and Email**.  
- Ensures that **National IDs are unique** and correctly formatted.  
- Search students by **ID, National ID, Phone, or Email**.  

### 📚 **Course Management**
- Add courses with unique **Course IDs and Titles**.  
- Store courses in an organized way for fast look-up.  

### 📝 **Enrollment Management**
- Enroll a student into a course.  
- Prevent duplicate enrollments for the same course.  
- Display all enrollments with student and course details.  

### 🔍 **Search Functionality**
- Search students by multiple keys (**ID, National ID, Phone, Email**).  
- Search courses by **Course ID**.  

---

## ⚙️ **Technical Highlights**

- **Data Structures**:  
  - `std::map` → Stores students and courses using IDs for fast look-up.  
  - `std::vector` → Stores all enrollments dynamically.  

- **Object-Oriented Programming (OOP)**:  
  - Classes: **Student, Course, Enrollment**.  
  - Encapsulation and modular design make the system maintainable and extensible.  

- **User Interaction**:  
  - Console-based menu for:  
    - Adding students  
    - Adding courses  
    - Enrolling students in courses  
    - Searching students/courses  
    - Displaying all students, courses, and enrollments  

---

## 🚀 **Future Improvements**

- Add support for **deleting/updating students and courses**.  
- Add **course prerequisites** to manage enrollment rules.  
- Implement **saving/loading data** to/from files or databases.  
- Create a **graphical user interface (GUI)** for better user experience.  
