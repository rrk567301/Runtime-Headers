@interface ActivityKit.SubscriptionPreferencesObservationClient : NSObject <ACActivityRemoteSubscriptionPreferencesObservationXPCClient> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ _subscriptionTypePublisher;
}

- (id)init;
- (void).cxx_destruct;
- (void)subscriptionPreferencesDidChange:(id)a0;

@end
