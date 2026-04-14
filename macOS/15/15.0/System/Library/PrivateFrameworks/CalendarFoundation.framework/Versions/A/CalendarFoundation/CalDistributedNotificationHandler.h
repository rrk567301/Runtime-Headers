@interface CalDistributedNotificationHandler : NSObject {
    SEL _selector;
}

@property (readonly, weak) id observer;

- (void).cxx_destruct;
- (void)handleNotification:(id)a0;
- (id)initWithObserver:(id)a0 selector:(SEL)a1;

@end
