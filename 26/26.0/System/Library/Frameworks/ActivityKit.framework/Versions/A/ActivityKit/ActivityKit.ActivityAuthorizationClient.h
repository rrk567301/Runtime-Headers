@interface ActivityKit.ActivityAuthorizationClient : NSObject <ACActivityAuthorizationXPCClient> {
    void /* unknown type, empty encoding */ _activityAuthorizationPublisher;
    void /* unknown type, empty encoding */ _frequentUpdatesPublisher;
    void /* unknown type, empty encoding */ _activityAuthorizationLevelPublisher;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_subscribedAuthorizationBundleIDs;
}

- (id)init;
- (void).cxx_destruct;
- (void)activityAuthorizationDidChangeWithOptions:(id)a0;
- (void)activityAuthorizationLevelDidChangeForBundleIdentifier:(id)a0 authorizationCount:(id)a1;
- (void)frequentUpdatesAuthorizationDidChangeWithOptions:(id)a0;

@end
