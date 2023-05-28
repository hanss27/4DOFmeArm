# for Opengl
 
CCGL=g++
GL_CFLAGS = -O2 -DSHM -DHZ=100
CYG_OpenGL = -lglut -lGLU -lGL
GL_LIBS += $(CYG_OpenGL) -lm 
# INC_FILES= $(wildcard *.cpp) $(wildcard *.o)


# INC_FILES= $(wildcard *.cpp) $(wildcard *.o)


planar: planargl.c 
	$(CCGL) $(GL_CFLAGS) $^ $(GL_LIBS) -o planar.o
	./planar.o

clean:
	rm -rf *.o