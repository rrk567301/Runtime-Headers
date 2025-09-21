@class NSArray;

@interface _ASAgentPeriodicMaintenanceActivity : NSObject

- (void)_activityDidTransitionToRunState:(id)a0;
- (void)_registerActivity;
- (void)_runActivityWithCompletionHandler:(id /* block */)a0;
- (id)initRegisteringActivityHandler:(BOOL)a0;
- (void)performPasskeyAvailabilityCheckForDomainsInSavedAccounts:(NSArray *)a0 completionHandler:(void (^)(void))a1;

@end
