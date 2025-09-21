@interface SACookieHandling : NSObject <SACookieHandlingProtocol>

- (char)appleLaunchMigrationCookieIsSet;
- (char)appleSetupResumeCookieIsSet;
- (char)macBuddyCookieIsSet;
- (char)repairMacBuddyCookieIfNeededWithSoftwareUpdateManager:(id)a0;
- (char)termsOfServiceCookieIsSet;

@end
