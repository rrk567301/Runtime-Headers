@class NSString, NSArray, ASKRestrictions, AMSPromise;

@interface ASKClient : NSObject <ASKClientExports>

@property (retain) AMSPromise *storefrontIdentifierPromise;
@property long long currentNotificationAuthorizationStatus;
@property (retain) NSString *_hostBundleId;
@property (retain) NSArray *_remoteDownloadIdentifiers;
@property (retain, nonatomic) ASKRestrictions *restrictions;
@property (readonly) struct CGSize { double x0; double x1; } screenSize;
@property (readonly) double screenCornerRadius;
@property (readonly, copy) NSString *guid;
@property (readonly, copy) NSString *thinnedApplicationVariantIdentifier;
@property (readonly, copy) NSString *storefrontIdentifier;
@property (readonly) NSString *deviceType;
@property (readonly) NSString *buildType;
@property (readonly) BOOL isActivityAvailable;
@property (readonly) BOOL isElectrocardiogramInstallationAllowed;
@property (readonly) BOOL isSidepackingEnabled;
@property (readonly) BOOL isTinkerWatch;
@property (readonly) BOOL isCharonSupported;
@property (readonly) BOOL isMandrakeSupported;
@property (readonly) BOOL isIconArtworkCapable;
@property (readonly) BOOL supportsHEIF;
@property (readonly, copy) NSString *activePairedWatchSystemVersion;
@property (readonly) long long maxAppContentRating;
@property (readonly) NSString *hostBundleId;
@property (readonly) NSArray *remoteDownloadIdentifiers;

+ (id)getStorefrontIdentifierPromise:(id)a0;

- (void)dealloc;
- (void)accountStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithRestrictions:(id)a0;
- (void)applicationDidForeground:(id)a0;
- (BOOL)canDevicePerformAppAction:(id)a0 withAppCapabilities:(id)a1;
- (BOOL)canUpdateNotificationAuthorizationStatus;
- (BOOL)deletableSystemAppCanBeInstalledOnWatchWithBundleID:(id)a0;
- (BOOL)deviceHasCapabilities:(id)a0;
- (BOOL)deviceHasCapabilitiesIncludingCompatibilityCheck:(id)a0 isVisionOSCompatibleIOSApp:(BOOL)a1;
- (void)hostBundleIdDidChange:(id)a0;
- (BOOL)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)a0 minorVersion:(id)a1 patchVersion:(id)a2;
- (BOOL)isAuthorizedForUserNotifications;
- (BOOL)isAutomaticDownloadingEnabled;
- (id)isPairedSystemVersionAtLeast:(id)a0;
- (void)remoteDownloadIdentifiersDidChange:(id)a0;
- (void)updateNotificationAuthorizationStatus;

@end
