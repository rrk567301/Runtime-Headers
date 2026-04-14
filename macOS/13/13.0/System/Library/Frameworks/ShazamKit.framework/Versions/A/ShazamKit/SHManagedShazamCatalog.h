@protocol SHMatcher;

@interface SHManagedShazamCatalog : SHShazamCatalog

@property (retain) id<SHMatcher> daemonMatcher;
@property BOOL sendNotifications;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (id)_initWithInstallationID:(id)a0;
- (id)_createMatcher;
- (void)startOneMatchAttempt;
- (void)startMatching;
- (void)startMatchingUntilDeadline:(id)a0;
- (void)startMatchingUntilResultFound;

@end
