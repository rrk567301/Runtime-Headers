@class NSMutableDictionary;

@interface RemoteNotificationPackageController : NSObject

@property (retain, nonatomic) NSMutableDictionary *permissions;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)generateNotificationBundlesIfNecessary;
- (id)deviceTokenForIdentifier:(id)a0;
- (void)getRemoteNotificationInformationForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)denyPermissionForIdentifier:(id)a0;
- (void)forgetPermissionForIdentifier:(id)a0;
- (void)grantPermissionForIdentifier:(id)a0 withDeviceToken:(id)a1;
- (void)_loadPackageInformationIfNecessary;
- (id)_ensureMutableSettingsForIdentifier:(id)a0;
- (void)_queueSavePackageInformation;
- (id)_packagePathForIdentifier:(id)a0;
- (id)notificationCenterBundlePathForIdentifier:(id)a0;
- (BOOL)_notificationBundleExistsForIdentifier:(id)a0;
- (void)setPackageLocation:(id)a0 name:(id)a1 allowedDomains:(id)a2 forIdentifier:(id)a3;
- (id)identifiersAddedBetweenDate:(id)a0 andDate:(id)a1 withAllowedPermissions:(BOOL)a2 withDeniedPermissions:(BOOL)a3;

@end
