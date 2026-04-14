@interface SACookieHandling : NSObject <SACookieHandlingProtocol>

- (BOOL)allowMacBuddyWithExistingAccounts;
- (BOOL)appleSetupResumeCookieHasValidReason;
- (BOOL)appleSetupResumeCookieIsSet;
- (BOOL)macBuddyCookieIsSet;
- (BOOL)repairMacBuddyCookieIfNeededWithSoftwareUpdateManager:(id)a0;
- (BOOL)termsOfServiceCookieIsSet;

@end
