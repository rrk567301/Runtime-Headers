@interface DDLog : NSObject

+ (void)initialize;
+ (void)applicationWillTerminate:(id)a0;
+ (id)loggingQueue;
+ (void)flushLog;
+ (void)lt_addLogger:(id)a0;
+ (void)lt_removeLogger:(id)a0;
+ (void)lt_removeAllLoggers;
+ (void)lt_log:(id)a0;
+ (void)queueLogMessage:(id)a0 asynchronously:(BOOL)a1;
+ (void)lt_flush;
+ (BOOL)isRegisteredClass:(Class)a0;
+ (id)registeredClasses;
+ (int)logLevelForClass:(Class)a0;
+ (void)setLogLevel:(int)a0 forClass:(Class)a1;
+ (void)addLogger:(id)a0;
+ (void)removeLogger:(id)a0;
+ (void)removeAllLoggers;
+ (void)log:(BOOL)a0 level:(int)a1 flag:(int)a2 context:(int)a3 file:(const char *)a4 function:(const char *)a5 line:(int)a6 tag:(id)a7 format:(id)a8;
+ (void)log:(BOOL)a0 level:(int)a1 flag:(int)a2 context:(int)a3 file:(const char *)a4 function:(const char *)a5 line:(int)a6 tag:(id)a7 format:(id)a8 args:(char *)a9;
+ (id)registeredClassNames;
+ (int)logLevelForClassWithName:(id)a0;
+ (void)setLogLevel:(int)a0 forClassWithName:(id)a1;

@end
