@class NSString, NSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface UNUserNotificationSettingsServiceConnection : NSObject <UNUserNotificationSettingsClientProtocol> {
    NSMutableArray *_observers;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)notificationSystemSettings;
- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (void)setNotificationSystemSettings:(id)a0;
- (void)resetScheduledDeliverySetting;
- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (id)notificationSourcesWithFilter:(id)a0;
- (void)_invalidate;
- (void)authorizationWithOptions:(unsigned long long)a0 forNotificationSourceIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)notificationSourcesWithIdentifiers:(id)a0;
- (id)notificationSettingsForSourceIdentifier:(id)a0;
- (void)_queue_invalidatedConnection;
- (void)_queue_removeObserver:(id)a0;
- (void)_queue_interruptedConnection;
- (id)_queue_ensureConnection;
- (void)revokeAuthorizationForNotificationSourceIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_queue_addObserver:(id)a0;
- (void)updateNotificationSystemSettings:(id)a0;
- (id)setSourceSettings:(id)a0;
- (void)updateNotificationSourcesWithBundleIdentifiers:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)notificationSourceWithIdentifier:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;

@end
