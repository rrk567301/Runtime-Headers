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

- (id)notificationSourcesWithFilter:(id)a0;
- (void)removeObserver:(id)a0;
- (id)notificationSourcesWithIdentifiers:(id)a0;
- (void)settingsServiceConnection:(id)a0 didUpdateNotificationSystemSettings:(id)a1;
- (BOOL)mutateNotificationSettingsForSourceIdentifier:(id)a0 mutatingBlock:(id /* block */)a1 error:(out id *)a2;
- (id)notificationSystemSettings;
- (void)addObserver:(id)a0;
- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (BOOL)setSourceSettings:(id)a0 error:(out id *)a1;
- (id)_init;
- (void).cxx_destruct;
- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (void)revokeAuthorizationForNotificationSourceIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)resetScheduledDeliverySetting;
- (void)settingsServiceConnection:(id)a0 didUpdateNotificationSourcesWithIdentifiers:(id)a1;
- (id)sourceWithIdentifier:(id)a0;
- (id)allNotificationSources;
- (void)setNotificationSystemSettings:(id)a0;
- (id)init;
- (void)authorizationWithOptions:(unsigned long long)a0 forNotificationSourceIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)notificationSourceWithIdentifier:(id)a0;
- (void)dealloc;

@end
