int main()
{
    /*
    Whole process of transforming source code into programm has 5 steps (also known as translation or building):
        1.preprocessing (done by preprocessor)
            -makes sure code files end in new line
            -process preprocessor directives (started with # and anded with newline)
            -the result of preprocessor is called translation unit
        2.compiling (done by compiler)
            -every file (translation unit) is compiled independently
            -produces object files (.o)
        3.linking (done by linker)
            -puts together object files, cpp standard library and other libraries
            -for example connects definitions of functions in different files
            -produces executable file
    
    #include
        preprocessor substitutes every #include directive with contents of files pointed to in brackets
    #if defined(PRINT_BOB)
        checks whether PRINT_BOB has been #defined. If not, then deletes code between #if defined(variable) and #endif 
    #if !defined(PRINT_BOB)
        analogiczne
    #if 0(1)
        always deletes (not deletes) block of code. Useful for "commenting out" block of code which has multi-line comments.
    */ 
    return 0;
}
