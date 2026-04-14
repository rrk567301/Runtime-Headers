@protocol SHMatcher;

@interface SHManagedShazamCatalog : SHShazamCatalog

@property (retain) id<SHMatcher> proxyMatcher;
@property BOOL sendNotifications;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (id)_initWithInstallationID:(id)a0;
- (id)_createMatcher;
- (void)startOneMatchAttempt;
- (void)startMatchingUntilDeadline:(id)a0;
- (void)startMatching;
- (void)startMatchingUntilResultFound;

@end
