@protocol SASoftwareUpdateManagerProtocol, SACookieHandlingProtocol;

@interface SALaunchController : NSObject <SALaunchProtocol>

@property (readonly) id<SACookieHandlingProtocol> cookieHandler;
@property (readonly) id<SASoftwareUpdateManagerProtocol> softwareUpdateManager;

- (unsigned long long)launchReason;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCookieHandler:(id)a0 softwareUpdateManager:(id)a1;
- (BOOL)needsToRun;
- (BOOL)repairMacBuddyCookieIfNeeded;

@end
