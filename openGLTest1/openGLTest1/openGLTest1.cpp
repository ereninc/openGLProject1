#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

/*
Erencan ÝNANCI 2-A B171210308
*/

using namespace std;
int main(){
    cout<<"OpenGL 4.6 - Cerceve ciziliyor.." <<endl;
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);

    GLFWwindow *ilkPencere = glfwCreateWindow(500, 500, "Ilk Pencere Deneme", NULL, NULL);
    cout << "Pencere olusturuluyor" << endl;
    glfwMakeContextCurrent(ilkPencere);
    if (!glfwInit()){
        cout<<"GLFW Kutuphanesi baslatilamadi."<<endl;
        glfwTerminate();
        return -1;
    }


    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        cout<<"Icerik yuklenemedi."<<endl;
        return -1;
    }

    glViewport(0, 0, 500, 500);
    //pencere kapatýlýncaya kadar dönüyor
    while (!glfwWindowShouldClose(ilkPencere)){
        glfwPollEvents();
        glClearColor(1.0f, 0.5f, 0.0f, 0.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(ilkPencere);
    }
    glfwTerminate();
    cout << "Pencere kapatildi." << endl;
    return 0;
}
