@interface SMLogging : NSObject

+ (void)logType:(unsigned long long)a0 inFunction:(const char *)a1 atLine:(int)a2 withString:(id)a3;
+ (id)formatLTID:(id)a0 withLabel:(id)a1;
+ (void)forceUsingSyslog;

@end
