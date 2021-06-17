###############################################################
# Program:
#     Milestone 08, Skeet
#     Brother Comeau, CS165
# Author:
#     Baden Hanchett
# Summary:
#     The game of Skeet will simulate skeet shooting. On the 
#     left side of the screen, birds randomly fly across the 
#     screen. On the bottom right corner of the screen, the 
#     rifle gets aimed by the user. Each match ends when 
#     either a bullet from the rifle destroys the bird. This 
#     will be done using classes and inheritance. 
# Above and Beyond
#     When you submit your final project (not for milestones),
#     list anything here that you did to go above and beyond
#     the base requirements for your project.
###############################################################


LFLAGS = -lglut -lGLU -lGL

###############################################################
# Build the main game
###############################################################
a.out: driver.o game.o uiInteract.o uiDraw.o point.o rifle.o velocity.o flying.o bullet.o bird.o
	g++ driver.o game.o uiInteract.o uiDraw.o point.o rifle.o velocity.o flying.o bullet.o bird.o $(LFLAGS)

###############################################################
# Individual files
#    uiDraw.o      Draw polygons on the screen and do all OpenGL graphics
#    uiInteract.o  Handles input events
#    point.o       The position on the screen
#    ground.o      Handles the ground / world
#    game.o        Handles the game interaction
#    velocity.o    Determines the velocity of the birds and bullets
#    flying.o      Base class for flying objects
#    bullet.o      Fires the bullets
#    bird.o        Displays the birds
###############################################################
uiDraw.o: uiDraw.cpp uiDraw.h point.h
	g++ -c uiDraw.cpp

uiInteract.o: uiInteract.cpp uiInteract.h
	g++ -c uiInteract.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

game.o: game.cpp uiDraw.h uiInteract.h point.h rifle.h bullet.h bird.h
	g++ -c game.cpp

driver.o: game.h uiInteract.h driver.cpp
	g++ -c driver.cpp

rifle.o: rifle.h point.h uiDraw.h rifle.cpp
	g++ -c rifle.cpp

#######################################################################
# ADD YOUR ADDITIONAL RULES HERE!
#
# Then, don't forget to add them to the dependecy list for a.out above.
#######################################################################
velociity.o: velocity.h point.h velocity.cpp
	g++ -c velocity.cpp

flying.o: flying.h point.h velocity.h flying.cpp
	g++ -c flying.cpp 

bullet.o: bullet.h flying.h bullet.cpp
	g++ -c bullet.cpp

bird.o: bird.h flying.h bird.cpp
	g++ -c bird.cpp
###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o
