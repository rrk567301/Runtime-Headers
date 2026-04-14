@interface ActivityKit.AlertClient : NSObject <ACAlertXPCClient> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ outputClient;
    void /* unknown type, empty encoding */ _queue_bufferedAlerts;
    void /* unknown type, empty encoding */ _queue_activeActivityDescriptorStates;
    void /* unknown type, empty encoding */ _queue_activityStatusSubscription;
}

- (void).cxx_destruct;
- (id)init;
- (void)dismissAlertWithActivityIdentifier:(id)a0;
- (void)presentAlertWithActivityIdentifier:(id)a0 payload:(id)a1 options:(id)a2 completion:(id /* block */)a3;

@end
