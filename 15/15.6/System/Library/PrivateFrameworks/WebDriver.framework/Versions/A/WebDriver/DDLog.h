@interface DDLog : NSObject

+ (void)initialize;
+ (void)applicationWillTerminate:(id)a0;
+ (id)loggingQueue;
+ (void)lt_log:(id)a0;
+ (void)queueLogMessage:(id)a0 asynchronously:(char)a1;
+ (void)addLogger:(id)a0;
+ (void)flushLog;
+ (char)isRegisteredClass:(Class)a0;
+ (void)log:(char)a0 level:(int)a1 flag:(int)a2 context:(int)a3 file:(const char *)a4 function:(const char *)a5 line:(int)a6 tag:(id)a7 format:(id)a8;
+ (void)log:(char)a0 level:(int)a1 flag:(int)a2 context:(int)a3 file:(const char *)a4 function:(const char *)a5 line:(int)a6 tag:(id)a7 format:(id)a8 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a9;
+ (int)logLevelForClass:(Class)a0;
+ (int)logLevelForClassWithName:(id)a0;
+ (void)lt_addLogger:(id)a0;
+ (void)lt_flush;
+ (void)lt_removeAllLoggers;
+ (void)lt_removeLogger:(id)a0;
+ (id)registeredClassNames;
+ (id)registeredClasses;
+ (void)removeAllLoggers;
+ (void)removeLogger:(id)a0;
+ (void)setLogLevel:(int)a0 forClass:(Class)a1;
+ (void)setLogLevel:(int)a0 forClassWithName:(id)a1;

@end
