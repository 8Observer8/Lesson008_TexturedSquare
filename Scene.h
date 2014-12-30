#ifndef SCENE_H
#define SCENE_H

#include <QOpenGLWidget>
#include <QOpenGLShaderProgram>
#include <QTimer>
#include <QKeyEvent>
#include "Square.h"

class Scene : public QOpenGLWidget
{
    Q_OBJECT

public:
    Scene( QWidget *parent = 0 );
    ~Scene();

private slots:
    void slotMove();

private:
    void initializeGL();
    void paintGL();
    void resizeGL( int w, int h );

    void keyPressEvent( QKeyEvent *event );

    QOpenGLShaderProgram m_program;

    int m_vertexAttr;
    int m_textureAttr;
    int m_textureUniform;
    int m_matrixUniform;

    Square *m_square;

    QTimer m_timer;
};

#endif // SCENE_H
