/*
 * =====================================================================================
 *
 *       Filename:  sky.cpp
 *
 *    Description:  sky.cpp
 *
 *        Version:  1.0
 *        Created:  06/05/2012 02:32:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */

#include "sky.h"

void Sky::render(GLint width) {

    glColor3ub(0, 0, 255);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);

    glBegin(GL_QUADS);
        // Left
        glTexCoord2d(0, 0);
        glVertex3f(-width, 0, -width);
        glTexCoord2d(1/3.0, 1/3.0);
        glVertex3f(-width, 3.0*width/4, -width);
        glTexCoord2d(1/3.0, 2/3.0);
        glVertex3f(-width, 3.0*width/4,  width);
        glTexCoord2d(0, 1);
        glVertex3f(-width, 0,  width);

        // Right
        glTexCoord2d(1, 0);
        glVertex3f(width, 0, -width);
        glTexCoord2d(1, 1);
        glVertex3f(width, 0,  width);
        glTexCoord2d(2/3.0, 2/3.0);
        glVertex3f(width, 3.0*width/4,  width);
        glTexCoord2d(2/3.0, 1/3.0);
        glVertex3f(width, 3.0*width/4,  -width);

        // Front 
        glTexCoord2d(1, 1);
        glVertex3f( width, 0, width);
        glTexCoord2d(0, 1);
        glVertex3f(-width, 0, width);
        glTexCoord2d(1/3.0, 2/3.0);
        glVertex3f(-width, 3.0*width/4, width);
        glTexCoord2d(2/3.0, 2/3.0);
        glVertex3f( width, 3.0*width/4, width);

        // Back
        glTexCoord2d(0, 0);
        glVertex3f(-width, 0, -width);
        glTexCoord2d(1, 0);
        glVertex3f( width, 0, -width);
        glTexCoord2d(2/3.0, 1/3.0);
        glVertex3f( width, 3.0*width/4, -width);
        glTexCoord2d(1/3.0, 1/3.0);
        glVertex3f(-width, 3.0*width/4, -width);

        // Top
        glTexCoord2d(2/3.0, 1/3.0);
        glVertex3f( width, 3.0*width/4, -width);
        glTexCoord2d(2/3.0, 2/3.0);
        glVertex3f( width, 3.0*width/4,  width);
        glTexCoord2d(1/3.0, 2/3.0);
        glVertex3f(-width, 3.0*width/4,  width);
        glTexCoord2d(1/3.0, 1/3.0);
        glVertex3f(-width, 3.0*width/4, -width);
    glEnd();

}
