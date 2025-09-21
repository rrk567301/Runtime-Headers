@protocol IMAPUserAgent;

@interface IMAPFramework : NSObject

@property (class, retain) id<IMAPUserAgent> userAgent;

+ (id)bundle;
+ (char)logsIMAPErrors;
+ (void)setLogsIMAPErrors:(char)a0;

@end
