@interface MailCoreFramework : NSObject

+ (id)bundle;
+ (void)setUserAgent:(id)a0;
+ (id)userAgent;
+ (BOOL)isRunningInSpotlightImporter;
+ (BOOL)isRunningInMail;
+ (BOOL)accountsUnavailableFromSpotlightImporter;
+ (void)setAccountsUnavailableFromSpotlightImporter:(BOOL)a0;
+ (void)setRunningInSpotlightImporter:(BOOL)a0;

@end
