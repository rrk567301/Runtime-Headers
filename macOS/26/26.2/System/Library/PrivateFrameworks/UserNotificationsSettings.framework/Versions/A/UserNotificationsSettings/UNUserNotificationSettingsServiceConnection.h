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

- (id)notificationSourcesWithFilter:(id)a0;
- (void)removeObserver:(id)a0;
- (id)_queue_ensureConnection;
- (id)notificationSourcesWithIdentifiers:(id)a0;
- (void)_queue_removeObserver:(id)a0;
- (id)setSourceSettings:(id)a0;
- (id)notificationSystemSettings;
- (void)addObserver:(id)a0;
- (void)_queue_invalidatedConnection;
- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (void)_queue_interruptedConnection;
- (void).cxx_destruct;
- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (void)revokeAuthorizationForNotificationSourceIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)resetScheduledDeliverySetting;
- (id)notificationSettingsForSourceIdentifier:(id)a0;
- (void)setNotificationSystemSettings:(id)a0;
- (id)init;
- (void)updateNotificationSystemSettings:(id)a0;
- (void)_queue_addObserver:(id)a0;
- (void)_invalidate;
- (void)authorizationWithOptions:(unsigned long long)a0 forNotificationSourceIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)updateNotificationSourcesWithBundleIdentifiers:(id)a0;
- (id)notificationSourceWithIdentifier:(id)a0;

@end
