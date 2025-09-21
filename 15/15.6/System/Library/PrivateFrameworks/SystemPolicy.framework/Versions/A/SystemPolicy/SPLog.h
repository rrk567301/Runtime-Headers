@interface SPLog : NSObject

+ (id)exec;
+ (id)generic;
+ (char)verboseLoggingEnabled;
+ (void)setVerboseLogging:(char)a0;
+ (id)signposts;
+ (id)measurements;
+ (unsigned long long)generateSignpostID;
+ (id)kext;
+ (id)sampling;

@end
