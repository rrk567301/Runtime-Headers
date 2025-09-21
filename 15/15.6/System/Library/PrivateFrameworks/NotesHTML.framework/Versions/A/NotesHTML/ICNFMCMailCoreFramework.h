@interface ICNFMCMailCoreFramework : NSObject

+ (id)bundle;
+ (void)setUserAgent:(id)a0;
+ (id)userAgent;
+ (char)isRunningInMail;
+ (char)isRunningInSpotlightImporter;
+ (void)setRunningInSpotlightImporter:(char)a0;
+ (int)uniqueIDForMessageURL;

@end
