@interface SPLog : NSObject

+ (id)downloads;
+ (id)generic;
+ (id)exec;
+ (void)setVerboseLogging:(BOOL)a0;
+ (BOOL)verboseLoggingEnabled;
+ (id)signposts;
+ (id)measurements;
+ (unsigned long long)generateSignpostID;
+ (id)kext;
+ (id)sampling;

@end
