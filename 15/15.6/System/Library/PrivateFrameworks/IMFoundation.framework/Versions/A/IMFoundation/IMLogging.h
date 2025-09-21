@interface IMLogging : NSObject

+ (id)dateFormatter;
+ (id)logFileDirectory;
+ (void)logString:(id)a0 toFolder:(id)a1 toFileNamed:(id)a2;
+ (void)enableConsoleLoggingForLevel:(int)a0;
+ (void)logAtLevel:(int)a0 type:(id)a1 category:(id)a2 format:(id)a3;
+ (void)logAtLevel:(int)a0 type:(id)a1 category:(id)a2 format:(id)a3 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a4;
+ (void)logAtLevel:(int)a0 type:(id)a1 category:(id)a2 insertProcessInfo:(char)a3 format:(id)a4;
+ (void)logAtLevel:(int)a0 type:(id)a1 category:(id)a2 insertProcessInfo:(char)a3 format:(id)a4 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a5;
+ (void)logAtLevel:(int)a0 type:(id)a1 category:(id)a2 insertProcessInfo:(char)a3 simpleLogString:(id)a4;
+ (void)logAtLevel:(int)a0 type:(id)a1 category:(id)a2 insertProcessInfo:(char)a3 simpleLogString:(id)a4 format:(id)a5 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a6 time:(unsigned long long)a7;
+ (void)logAtLevel:(int)a0 type:(id)a1 category:(id)a2 insertProcessInfo:(char)a3 simpleLogString:(id)a4 time:(unsigned long long)a5;
+ (char)loggingEnabledForLevel:(int)a0;
+ (id)stringForDate;
+ (id)timeFormatter;

@end
