CC=g++
FLAG = -Wall -Werror -std=c99
MDir=App/Menu/
RQDir=App/RQuestions/
MQDir=App/MQuestions/
RMDir=App/RussianMenu/
MMDir=App/MathMenu/
OBJECKTALL=$(MDir)main.o $(MDir)Back.o $(MDir)Menu.o $(RQDir)RfuncAnswer.o $(MQDir)funcAnswer.o $(RQDir)Rquestions1.o $(RQDir)Rquestions2.o $(RQDir)Rquestions3.o $(RQDir)Rquestions4.o $(RQDir)Rquestions5.o $(RQDir)Rquestions6.o $(RQDir)Rquestions7.o $(RQDir)Rquestions8.o $(RQDir)Rquestions9.o $(RQDir)Rquestions10.o $(MQDir)MQuestions1.o $(MQDir)MQuestions2.o $(MQDir)MQuestions3.o $(MQDir)MQuestions4.o $(MQDir)MQuestions5.o $(MQDir)MQuestions6.o $(RMDir)Russian.o $(RMDir)RRes.cpp $(MMDir)Math.o $(MMDir)MRes.o
