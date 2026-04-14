@interface SPLog : NSObject

+ (id)exec;
+ (BOOL)verboseLoggingEnabled;
+ (void)setVerboseLogging:(BOOL)a0;
+ (id)signposts;
+ (id)measurements;
+ (id)generic;
+ (id)kext;
+ (unsigned long long)generateSignpostID;

@end
