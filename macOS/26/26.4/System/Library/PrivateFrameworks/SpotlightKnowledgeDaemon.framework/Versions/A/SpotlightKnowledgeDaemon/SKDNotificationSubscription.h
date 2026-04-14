@interface SKDNotificationSubscription : NSObject <SKDNotificationSubscriptionProtocol> {
    void /* unknown type, empty encoding */ state;
}

- (void)cancel;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithObserver:(id)a0 selector:(SEL)a1 notificationName:(id)a2;

@end
