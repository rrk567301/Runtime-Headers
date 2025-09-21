@interface TYLogger : NSObject

+ (void)closeLogFile;
+ (void)logToFile:(char)a0;
+ (void)logToSTDERR:(char)a0;
+ (id)openLogFile:(id)a0;
+ (id)openLogFile:(id)a0 inDirectory:(id)a1;

@end
