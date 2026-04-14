@interface CalDistributedNotificationHandler : NSObject {
    SEL _selector;
}

@property (readonly, weak) id observer;

- (id)initWithObserver:(id)a0 selector:(SEL)a1;
- (void)handleNotification:(id)a0;
- (void).cxx_destruct;

@end
