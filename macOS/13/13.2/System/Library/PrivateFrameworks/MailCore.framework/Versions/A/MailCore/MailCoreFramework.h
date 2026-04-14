@interface MailCoreFramework : NSObject

+ (id)bundle;
+ (void)setUserAgent:(id)a0;
+ (id)userAgent;
+ (void)setAccountsUnavailableFromSpotlightImporter:(BOOL)a0;
+ (BOOL)isRunningInMail;
+ (BOOL)isRunningInSpotlightImporter;
+ (BOOL)accountsUnavailableFromSpotlightImporter;
+ (void)setRunningInSpotlightImporter:(BOOL)a0;

@end
