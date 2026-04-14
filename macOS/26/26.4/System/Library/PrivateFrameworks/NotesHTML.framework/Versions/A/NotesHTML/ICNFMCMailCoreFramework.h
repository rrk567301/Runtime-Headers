@interface ICNFMCMailCoreFramework : NSObject

+ (void)setUserAgent:(id)a0;
+ (id)userAgent;
+ (id)bundle;
+ (BOOL)isRunningInMail;
+ (BOOL)isRunningInSpotlightImporter;
+ (void)setRunningInSpotlightImporter:(BOOL)a0;
+ (int)uniqueIDForMessageURL;

@end
