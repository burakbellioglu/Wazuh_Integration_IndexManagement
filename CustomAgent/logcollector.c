/*
set_sockets();
    files_lock_init();
*/
#ifdef WIN32
    if (_getmaxstdio() < maximum_files)
    {
        /* Increment the amount of file descriptors that the process can hold */
        if (_setmaxstdio(maximum_files) == -1)
        {
            merror("Could not increase maxstdio: %s", strerror(errno));
        }
        else
        {
            mdebug2("maxstdio increased to %d", maximum_files);
        }
    }
#endif

/*
 check_pattern_expand(1);
    check_pattern_expand_excluded();
*/