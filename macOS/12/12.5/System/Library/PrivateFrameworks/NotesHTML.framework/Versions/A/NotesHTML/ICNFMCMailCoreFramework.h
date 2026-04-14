@interface ICNFMCMailCoreFramework : NSObject

+ (id)bundle;
+ (void)setUserAgent:(id)a0;
+ (id)userAgent;
+ (BOOL)isRunningInSpotlightImporter;
+ (BOOL)isRunningInMail;
+ (void)setRunningInSpotlightImporter:(BOOL)a0;
+ (int)uniqueIDForMessageURL;

@end
