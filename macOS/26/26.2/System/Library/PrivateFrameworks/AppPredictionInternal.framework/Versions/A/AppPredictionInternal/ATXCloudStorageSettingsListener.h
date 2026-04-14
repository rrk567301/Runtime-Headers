@protocol ATXCloudStorageSettingsDelegate;

@interface ATXCloudStorageSettingsListener : NSObject

@property (retain, nonatomic) id<ATXCloudStorageSettingsDelegate> delegate;

+ (id)sharedInstance;
+ (BOOL)isBackupForContactsEnabled;
+ (BOOL)isBackupForSiriEnabled;

- (void).cxx_destruct;
- (void)handleBackupPreferencesDidChange;
- (void)registerForCloudStorageDeletedByUserNotification;
- (void)handleDeleteDataRequest;
- (id)init;
- (void)registerForCloudStorageSettingsNotifications;
- (void)registerForCloudSyncPreferenceDidChangeNotification;

@end
