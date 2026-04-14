@interface SPLog : NSObject

+ (id)exec;
+ (BOOL)verboseLoggingEnabled;
+ (void)setVerboseLogging:(BOOL)a0;
+ (id)signposts;
+ (id)measurements;
+ (id)generic;
+ (unsigned long long)generateSignpostID;
+ (id)kext;

@end
