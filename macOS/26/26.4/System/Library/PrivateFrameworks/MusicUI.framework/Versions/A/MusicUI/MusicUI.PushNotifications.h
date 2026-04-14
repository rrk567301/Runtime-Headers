@interface MusicUI.PushNotifications : NSObject <APSConnectionDelegate> {
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ subscriptionsByTopic;
    void /* unknown type, empty encoding */ connection;
}

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
