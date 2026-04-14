@interface _TtC11SessionCoreP33_3EB6553D2992046DCD21680C8109860026AuthorizationServiceClient : NSObject <ACActivityAuthorizationXPCServer> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ authorizationManager;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ authorizationLevelBundlesObserving;
}

- (id)init;
- (void).cxx_destruct;
- (id)activityAuthorizationsCountForBundleIdentifier:(id)a0;
- (BOOL)areActivitiesEnabledForBundleIdentifier:(id)a0;
- (BOOL)areActivitiesEnabledForCurrentProcess;
- (BOOL)areFrequentPushesEnabledForBundleIdentifier:(id)a0;
- (BOOL)areFrequentPushesEnabledForCurrentProcess;
- (BOOL)clearActivitiesAuthorizationForBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)setActivitiesAuthorizationForBundleIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)setFrequentPushesEnabledForBundleIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)subscribeToAuthorizationLevelChangesForBundleIdentifier:(id)a0;
- (BOOL)unsubscribeToAuthorizationLevelChangesForBundleIdentifier:(id)a0;

@end
