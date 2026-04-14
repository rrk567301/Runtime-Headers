@class NSString;

@interface LNAppNotificationEventRegistrationProvider : NSObject <LNAppNotificationEventRegistrationProviderInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerForAppNotificationEventsOfBundleIdentifier:(id)a0 entityType:(id)a1 completion:(id /* block */)a2;
- (void)unregisterForAppNotificationEventsOfBundleIdentifier:(id)a0 entityType:(id)a1 completion:(id /* block */)a2;

@end
