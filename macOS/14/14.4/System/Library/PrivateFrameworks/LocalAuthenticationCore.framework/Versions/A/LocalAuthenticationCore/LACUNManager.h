@class NSObject;

@interface LACUNManager : NSObject {
    NSObject *_notificationCenter;
}

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)cancelNotificationsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)initWithBundleIdentifier:(id)a0 categoryIdentifier:(id)a1;
- (void)postNotificationWithConfiguration:(id)a0 delay:(double)a1 completion:(id /* block */)a2;

@end
