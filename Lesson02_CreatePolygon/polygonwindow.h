#ifndef POLYGONWINDOW_H
#define POLYGONWINDOW_H

#include <QOpenGLShaderProgram>
#include <QGLShader>
#include <QScreen>
#include "openglwindow.h"

class PolygonWindow : public OpenGLWindow
{
    Q_OBJECT
public:
    explicit PolygonWindow(QWindow *parent = 0);
protected:
    void initialize();
    void render();
private: 
    void initVAO();
    QOpenGLShaderProgram *m_program;
    GLuint m_vertexbuffer[2];
};

#endif // POLYGONWINDOW_H
