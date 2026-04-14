@class NSString, ACAccountStore, ACAccount;

@interface ASCJSClientObject : NSObject <ASCJSClientObjectExports>

@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (retain) ACAccount *activeiTunesAccount;
@property (readonly) struct CGSize { double x0; double x1; } screenSize;
@property (readonly) double screenCornerRadius;
@property (readonly, copy) NSString *guid;
@property (readonly, copy) NSString *thinnedApplicationVariantIdentifier;
@property (readonly) BOOL newPaymentMethodEnabled;
@property (readonly, copy) NSString *storefrontIdentifier;
@property (readonly) NSString *deviceType;
@property (readonly) NSString *buildType;
@property (readonly) BOOL isActivityAvailable;
@property (readonly) BOOL isElectrocardiogramInstallationAllowed;
@property (readonly) BOOL isSidepackingEnabled;
@property (readonly) BOOL isTinkerWatch;
@property (readonly) BOOL supportsHEIF;
@property (readonly, copy) NSString *activePairedWatchSystemVersion;
@property (readonly) BOOL isIconArtworkCapable;

- (void)dealloc;
- (id)initWithAccountStore:(id)a0;
- (void)accountStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)deletableSystemAppCanBeInstalledOnWatchWithBundleID:(id)a0;
- (BOOL)deviceHasCapabilities:(id)a0;
- (BOOL)deviceHasCapabilitiesIncludingCompatibilityCheck:(id)a0 isVisionOSCompatibleIOSApp:(BOOL)a1;
- (BOOL)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)a0 minorVersion:(id)a1 patchVersion:(id)a2;
- (BOOL)isAutomaticDownloadingEnabled;
- (id)isPairedSystemVersionAtLeast:(id)a0;

@end
