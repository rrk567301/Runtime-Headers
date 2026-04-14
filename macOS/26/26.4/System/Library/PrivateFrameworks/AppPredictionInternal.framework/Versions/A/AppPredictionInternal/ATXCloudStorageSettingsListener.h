@protocol ATXCloudStorageSettingsDelegate;

@interface ATXCloudStorageSettingsListener : NSObject

@property (retain, nonatomic) id<ATXCloudStorageSettingsDelegate> delegate;

+ (id)sharedInstance;
+ (BOOL)isBackupForContactsEnabled;
+ (BOOL)isBackupForSiriEnabled;

- (void)handleBackupPreferencesDidChange;
- (void)registerForCloudStorageSettingsNotifications;
- (void).cxx_destruct;
- (void)registerForCloudSyncPreferenceDidChangeNotification;
- (id)init;
- (void)handleDeleteDataRequest;
- (void)registerForCloudStorageDeletedByUserNotification;

@end
