@interface MailCoreFramework : NSObject

+ (id)bundle;
+ (void)setUserAgent:(id)a0;
+ (id)userAgent;
+ (char)isRunningInMail;
+ (char)accountsUnavailableFromSpotlightImporter;
+ (char)isRunningInSpotlightImporter;
+ (void)setAccountsUnavailableFromSpotlightImporter:(char)a0;
+ (void)setRunningInSpotlightImporter:(char)a0;

@end
