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

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_invalidate;
- (id)_queue_ensureConnection;
- (void)_queue_interruptedConnection;
- (void)_queue_invalidatedConnection;
- (id)allNotificationSources;
- (id)notificationSourceWithIdentifier:(id)a0;
- (id)notificationSystemSettings;
- (id)notificationSourcesWithIdentifiers:(id)a0;
- (void)setNotificationSystemSettings:(id)a0;
- (void)updateNotificationSystemSettings:(id)a0;
- (void)_queue_addObserver:(id)a0;
- (void)_queue_removeObserver:(id)a0;
- (void)authorizationWithOptions:(unsigned long long)a0 forNotificationSourceIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (void)resetScheduledDeliverySetting;
- (void)updateNotificationSourcesWithBundleIdentifiers:(id)a0;

@end
