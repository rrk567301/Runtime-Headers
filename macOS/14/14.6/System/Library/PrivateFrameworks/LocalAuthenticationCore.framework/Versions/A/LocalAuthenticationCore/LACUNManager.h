@class NSString, NSObject;

@interface LACUNManager : NSObject <LACUNManager> {
    NSObject *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)cancelAllNotificationsWithCompletion:(id /* block */)a0;
- (void)cancelNotificationsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)initWithBundleIdentifier:(id)a0 categoryIdentifier:(id)a1;
- (void)postNotification:(id)a0 completion:(id /* block */)a1;

@end
