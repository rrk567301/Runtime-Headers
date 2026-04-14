@class NSString, NSDate;

@interface SUOSNotificationBundleHandler : NSObject

@property (retain) NSDate *deferralDate;
@property (nonatomic) BOOL notificationPending;
@property (nonatomic) BOOL notificationBundleExists;
@property BOOL mdmInitiatedNotificationBundleInstall;
@property (copy, nonatomic) id /* block */ notificationBundleDidChangeHandler;
@property (readonly) NSString *notificationBundlePath;

+ (id)sharedNotificationBundleHandler;

- (void)dealloc;
- (id)init;
- (void)restoreFromCoder:(id)a0;
- (void)archiveToCoder:(id)a0;
- (id)getOSNotificationBundleProperties;
- (void)clearNotificationPending;
- (void)shouldNotifyForMajorOSAvailable:(id /* block */)a0;
- (id)_subundleFromSUTags;
- (void)_notificationDeferralDate:(id /* block */)a0;
- (void)sendMajorOSAvailableNotification;
- (void)_handleMajorOSBundleInstalled:(BOOL)a0;
- (void)_listenForNotificationInfoPlistChangesIfExists;
- (void)listenForNotificationBundleChanges;
- (id)osNotificationBundlePath;

@end
