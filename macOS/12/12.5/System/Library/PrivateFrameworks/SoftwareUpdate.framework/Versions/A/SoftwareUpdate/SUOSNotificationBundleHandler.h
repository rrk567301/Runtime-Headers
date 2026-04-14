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
- (void)archiveToCoder:(id)a0;
- (void)restoreFromCoder:(id)a0;
- (id)osNotificationBundlePath;
- (void)clearNotificationPending;
- (void)shouldNotifyForMajorOSAvailable:(id /* block */)a0;
- (void)sendMajorOSAvailableNotification;
- (id)getOSNotificationBundleProperties;
- (void)_notificationDeferralDate:(id /* block */)a0;
- (void)listenForNotificationBundleChanges;
- (id)_subundleFromSUTags;
- (void)_listenForNotificationInfoPlistChangesIfExists;
- (void)_handleMajorOSBundleInstalled:(BOOL)a0;

@end
