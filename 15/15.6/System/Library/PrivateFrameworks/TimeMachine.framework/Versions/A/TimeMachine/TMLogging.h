@interface TMLogging : NSObject

+ (id)configuration;
+ (void)setConfiguration:(id)a0;
+ (id)countDictionary;
+ (id)handlers;
+ (void)removeHandler:(id)a0;
+ (void)addHandler:(id)a0;
+ (long long)getCountForKey:(id)a0;
+ (void)_dispatchRecord:(id)a0;
+ (void)_logMessage:(id)a0 withLevel:(unsigned int)a1 forKey:(id)a2 inFile:(const char *)a3 atLine:(unsigned int)a4;
+ (void)clearCountsForKeys:(id)a0;
+ (char)commonDebugLoggingEnabled;
+ (void)incrementCountForKey:(id)a0;
+ (void)logError:(id)a0;
+ (void)logInfo:(id)a0;
+ (void)logInfo:(id)a0 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;
+ (void)logMessageForKey:(id)a0 inFile:(const char *)a1 atLine:(int)a2 format:(id)a3;
+ (id)logMessageWithInterval:(double)a0 lastDate:(id)a1 level:(unsigned int)a2 forKey:(id)a3 inFile:(const char *)a4 atLine:(int)a5 format:(id)a6;
+ (void)logMessageWithLevel:(unsigned int)a0 forKey:(id)a1 inFile:(const char *)a2 atLine:(int)a3 format:(id)a4;
+ (void)logMessageWithLevel:(unsigned int)a0 forKey:(id)a1 inFile:(const char *)a2 atLine:(int)a3 format:(id)a4 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a5;
+ (char)loggingEnabledForKey:(id)a0;
+ (void)setCommonDebugLoggingEnabled:(char)a0;
+ (void)setCount:(long long)a0 forKey:(id)a1;
+ (void)setLoggingEnabled:(char)a0 forKey:(id)a1;

@end
