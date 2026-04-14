@interface MailCoreFramework : NSObject

+ (void)setUserAgent:(id)a0;
+ (id)userAgent;
+ (id)bundle;
+ (BOOL)isRunningInMail;
+ (BOOL)accountsUnavailableFromSpotlightImporter;
+ (BOOL)isRunningInSpotlightImporter;
+ (void)setAccountsUnavailableFromSpotlightImporter:(BOOL)a0;
+ (void)setRunningInSpotlightImporter:(BOOL)a0;

@end
