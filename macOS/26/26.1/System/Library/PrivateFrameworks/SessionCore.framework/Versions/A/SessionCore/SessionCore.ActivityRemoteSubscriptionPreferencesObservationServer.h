@interface SessionCore.ActivityRemoteSubscriptionPreferencesObservationServer : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ requestProcessingQueue;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ replicatorParticipant;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ clients;
}

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
