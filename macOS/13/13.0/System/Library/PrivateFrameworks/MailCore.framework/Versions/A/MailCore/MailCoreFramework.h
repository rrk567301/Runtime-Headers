@interface MailCoreFramework : NSObject

+ (id)bundle;
+ (void)setUserAgent:(id)a0;
+ (id)userAgent;
+ (BOOL)accountsUnavailableFromSpotlightImporter;
+ (void)setAccountsUnavailableFromSpotlightImporter:(BOOL)a0;
+ (BOOL)isRunningInMail;
+ (BOOL)isRunningInSpotlightImporter;
+ (void)setRunningInSpotlightImporter:(BOOL)a0;

@end
