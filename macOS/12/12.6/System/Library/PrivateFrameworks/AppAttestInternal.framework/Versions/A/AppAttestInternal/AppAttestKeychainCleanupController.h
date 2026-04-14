@class NSString;

@interface AppAttestKeychainCleanupController : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)applicationsDidUninstall:(id)a0;
- (void)start;
- (void)_registerActivity;
- (void)_updateActivityCriteria:(id *)a0;

@end
