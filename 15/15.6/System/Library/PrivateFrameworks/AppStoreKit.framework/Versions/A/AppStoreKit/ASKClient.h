@class NSString, NSArray, AMSPromise;

@interface ASKClient : NSObject <ASKClientExports>

@property (retain) AMSPromise *storefrontIdentifierPromise;
@property long long currentNotificationAuthorizationStatus;
@property (retain) NSString *_hostBundleId;
@property (retain) NSArray *_remoteDownloadIdentifiers;
@property (readonly) struct CGSize { double x0; double x1; } screenSize;
@property (readonly) double screenCornerRadius;
@property (readonly, copy) NSString *guid;
@property (readonly, copy) NSString *thinnedApplicationVariantIdentifier;
@property (readonly) char newPaymentMethodEnabled;
@property (readonly, copy) NSString *storefrontIdentifier;
@property (readonly) NSString *deviceType;
@property (readonly) NSString *buildType;
@property (readonly) char isActivityAvailable;
@property (readonly) char isElectrocardiogramInstallationAllowed;
@property (readonly) char isSidepackingEnabled;
@property (readonly) char isTinkerWatch;
@property (readonly) char isCharonSupported;
@property (readonly) char isMandrakeSupported;
@property (readonly) char supportsHEIF;
@property (readonly, copy) NSString *activePairedWatchSystemVersion;
@property (readonly) NSString *hostBundleId;
@property (readonly) NSArray *remoteDownloadIdentifiers;

+ (id)getStorefrontIdentifierPromise:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)accountStoreDidChange:(id)a0;
- (void)applicationDidForeground:(id)a0;
- (char)canDevicePerformAppAction:(id)a0 withAppCapabilities:(id)a1;
- (char)canUpdateNotificationAuthorizationStatus;
- (char)deletableSystemAppCanBeInstalledOnWatchWithBundleID:(id)a0;
- (char)deviceHasCapabilities:(id)a0;
- (char)deviceHasCapabilitiesIncludingCompatibilityCheck:(id)a0 isVisionOSCompatibleIOSApp:(char)a1;
- (void)hostBundleIdDidChange:(id)a0;
- (char)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)a0 minorVersion:(id)a1 patchVersion:(id)a2;
- (char)isAuthorizedForUserNotifications;
- (char)isAutomaticDownloadingEnabled;
- (id)isPairedSystemVersionAtLeast:(id)a0;
- (void)remoteDownloadIdentifiersDidChange:(id)a0;
- (void)updateNotificationAuthorizationStatus;

@end
