@interface ICNFMCMailCoreFramework : NSObject

+ (id)bundle;
+ (id)userAgent;
+ (void)setUserAgent:(id)a0;
+ (BOOL)isRunningInMail;
+ (BOOL)isRunningInSpotlightImporter;
+ (void)setRunningInSpotlightImporter:(BOOL)a0;
+ (int)uniqueIDForMessageURL;

@end
