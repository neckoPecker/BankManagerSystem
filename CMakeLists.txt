cmake_minimum_required(VERSION 3.1)

project(BankManagementSystem 
	VERSION 0.1
	DESCRIPTION "A simple bank manager system"
	)

set(
	HEADER_DIR
	"include/"
	)

set(
	SOURCES
	"./src/main.c"
	 
	)

add_executable(
	BankManagementSystem 
	${SOURCES}
	)

# Include the header files
include_directories(BankManagementSystem ${HEADER_DIR})
link_directories(${HEADER_DIR})
