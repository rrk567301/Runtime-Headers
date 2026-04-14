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

- (void)_queue_invalidatedConnection;
- (void)_queue_interruptedConnection;
- (void)notificationSourcesWithFilter:(id)a0 sort:(id)a1 maxCount:(id)a2 completionHandler:(id /* block */)a3;
- (id)notificationSourcesWithFilter:(id)a0;
- (void)authorizationWithOptions:(unsigned long long)a0 forNotificationSourceIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (void)setNotificationSystemSettings:(id)a0;
- (void)resetScheduledDeliverySetting;
- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (id)_queue_ensureConnection;
- (id)notificationSourcesWithIdentifiers:(id)a0;
- (void)revokeAuthorizationForNotificationSourceIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)notificationSourceWithIdentifier:(id)a0;
- (id)notificationSystemSettings;
- (void)updateNotificationSourcesWithBundleIdentifiers:(id)a0;
- (void)_invalidate;
- (id)notificationSettingsForSourceIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)updateNotificationSystemSettings:(id)a0;
- (id)init;
- (void)_queue_removeObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_queue_addObserver:(id)a0;
- (id)setSourceSettings:(id)a0;

@end
