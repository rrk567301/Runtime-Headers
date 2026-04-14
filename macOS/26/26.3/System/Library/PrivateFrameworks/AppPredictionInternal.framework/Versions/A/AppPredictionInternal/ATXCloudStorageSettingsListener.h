@protocol ATXCloudStorageSettingsDelegate;

@interface ATXCloudStorageSettingsListener : NSObject

@property (retain, nonatomic) id<ATXCloudStorageSettingsDelegate> delegate;

+ (id)sharedInstance;
+ (BOOL)isBackupForContactsEnabled;
+ (BOOL)isBackupForSiriEnabled;

- (void)registerForCloudStorageSettingsNotifications;
- (id)init;
- (void)handleDeleteDataRequest;
- (void).cxx_destruct;
- (void)registerForCloudSyncPreferenceDidChangeNotification;
- (void)registerForCloudStorageDeletedByUserNotification;
- (void)handleBackupPreferencesDidChange;

@end
