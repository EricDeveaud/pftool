#ifndef      __PFTOOL_DEBUG_H
#define      __PFTOOL_DEBUG_H


//define debugs
#define POLL_DEBUG

//define debug print statements

#ifdef POLL_DEBUG 
#define PRINT_POLL_DEBUG(format, args...) printf("POLL_DEBUG: "format, ##args);
#else
#define PRINT_POLL_DEBUG(format, args...)
#endif

#endif
