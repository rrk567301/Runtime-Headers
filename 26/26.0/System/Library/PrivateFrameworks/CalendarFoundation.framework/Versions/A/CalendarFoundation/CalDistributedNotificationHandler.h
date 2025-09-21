@interface CalDistributedNotificationHandler : NSObject {
    SEL _selector;
}

@property (readonly, weak) id observer;

- (void)handleNotification:(id)a0;
- (id)initWithObserver:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;

@end
