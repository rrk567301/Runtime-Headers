@protocol ATXCloudStorageSettingsDelegate;

@interface ATXCloudStorageSettingsListener : NSObject

@property (retain, nonatomic) id<ATXCloudStorageSettingsDelegate> delegate;

+ (id)sharedInstance;
+ (BOOL)isBackupForContactsEnabled;
+ (BOOL)isBackupForSiriEnabled;

- (void)registerForCloudStorageSettingsNotifications;
- (void)registerForCloudSyncPreferenceDidChangeNotification;
- (void)handleDeleteDataRequest;
- (void).cxx_destruct;
- (void)handleBackupPreferencesDidChange;
- (void)registerForCloudStorageDeletedByUserNotification;
- (id)init;

@end
