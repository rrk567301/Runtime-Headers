@protocol ATXCloudStorageSettingsDelegate;

@interface ATXCloudStorageSettingsListener : NSObject

@property (retain, nonatomic) id<ATXCloudStorageSettingsDelegate> delegate;

+ (id)sharedInstance;
+ (BOOL)isBackupForContactsEnabled;
+ (BOOL)isBackupForSiriEnabled;

- (void)registerForCloudStorageDeletedByUserNotification;
- (void)registerForCloudStorageSettingsNotifications;
- (id)init;
- (void)registerForCloudSyncPreferenceDidChangeNotification;
- (void)handleBackupPreferencesDidChange;
- (void)handleDeleteDataRequest;
- (void).cxx_destruct;

@end
