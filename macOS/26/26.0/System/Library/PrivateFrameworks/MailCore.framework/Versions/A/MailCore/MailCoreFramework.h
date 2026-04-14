@interface MailCoreFramework : NSObject

+ (id)bundle;
+ (id)userAgent;
+ (void)setUserAgent:(id)a0;
+ (BOOL)isRunningInMail;
+ (BOOL)accountsUnavailableFromSpotlightImporter;
+ (BOOL)isRunningInSpotlightImporter;
+ (void)setAccountsUnavailableFromSpotlightImporter:(BOOL)a0;
+ (void)setRunningInSpotlightImporter:(BOOL)a0;

@end
