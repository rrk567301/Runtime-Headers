@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface UNSystemPreferencesServiceConnection : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void)_queue_invalidatedConnection;
- (void)_queue_interruptedConnection;
- (id)notificationSourcesWithFilter:(id)a0;
- (void)setNotificationSystemSettings:(id)a0;
- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (id)_queue_ensureConnection;
- (id)notificationSourcesWithIdentifiers:(id)a0;
- (id)notificationSourceWithIdentifier:(id)a0;
- (id)notificationSystemSettings;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)allNotificationSources;
- (id)init;
- (id)setSourceSettings:(id)a0;
- (BOOL)_boolFromValue:(id)a0;
- (id)_queue_appPreferencesDictionary;
- (long long)_alertSettingFromAlertStyle:(id)a0;
- (long long)_alertStyleFromAlertStyle:(id)a0;
- (long long)_authorizationStatusForPrefs:(id)a0;
- (BOOL)_boolFromSetting:(long long)a0;
- (long long)_groupingSettingFromGrouping:(id)a0;
- (id)_modifySection:(id)a0 withKeyValues:(id)a1 allAppPrefs:(id)a2;
- (id)_notificationSourceWithIdentifier:(id)a0 fromAppPrefs:(id)a1;
- (void)_queue_setAppPreferencesDictionary:(id)a0 forSourceIdentifier:(id)a1;
- (void)_queue_setSystemSummarizePreviews:(BOOL)a0;
- (BOOL)_queue_systemSummarizePreviews;
- (long long)_settingFromBool:(BOOL)a0;
- (long long)_settingFromValue:(id)a0;
- (long long)_showPreviewsSettingFromContentVisibility:(id)a0;
- (id)_updatedAppDict:(id)a0 withNotificationSettings:(id)a1;

@end
