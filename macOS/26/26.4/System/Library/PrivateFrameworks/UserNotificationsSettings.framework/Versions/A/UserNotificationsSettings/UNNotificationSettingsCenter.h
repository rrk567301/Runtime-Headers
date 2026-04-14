@class NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue, UNNotificationSettingsCenterDelegate;

@interface UNNotificationSettingsCenter : NSObject <UNUserNotificationSettingsServiceConnectionObserver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak) id<UNNotificationSettingsCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentNotificationSettingsCenter;

- (id)_init;
- (void)notificationSourcesWithFilter:(id)a0 sort:(id)a1 maxCount:(id)a2 completionHandler:(id /* block */)a3;
- (id)notificationSourcesWithFilter:(id)a0;
- (void)settingsServiceConnection:(id)a0 didUpdateNotificationSystemSettings:(id)a1;
- (void)authorizationWithOptions:(unsigned long long)a0 forNotificationSourceIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (void)setNotificationSystemSettings:(id)a0;
- (void)resetScheduledDeliverySetting;
- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (id)notificationSourcesWithIdentifiers:(id)a0;
- (void)revokeAuthorizationForNotificationSourceIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)notificationSourceWithIdentifier:(id)a0;
- (id)notificationSystemSettings;
- (id)sourceWithIdentifier:(id)a0;
- (BOOL)setSourceSettings:(id)a0 error:(out id *)a1;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)allNotificationSources;
- (id)init;
- (void)removeObserver:(id)a0;
- (BOOL)mutateNotificationSettingsForSourceIdentifier:(id)a0 mutatingBlock:(id /* block */)a1 error:(out id *)a2;
- (void)dealloc;
- (void)settingsServiceConnection:(id)a0 didUpdateNotificationSourcesWithIdentifiers:(id)a1;

@end
