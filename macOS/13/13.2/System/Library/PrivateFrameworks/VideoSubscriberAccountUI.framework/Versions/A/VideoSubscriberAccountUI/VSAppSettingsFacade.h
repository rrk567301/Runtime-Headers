@class NSOperation, NSArray, VSIdentityProvider, NSOperationQueue, VSPersistentStorage, VSAppSettingsViewModel, UIViewController, VSAccountChannels, VSRestrictionsCenter;

@interface VSAppSettingsFacade : NSObject

@property (copy, nonatomic) NSArray *decidedApps;
@property (copy, nonatomic) NSArray *availableApps;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSOperation *currentPresentationOperation;
@property (retain, nonatomic) VSPersistentStorage *storage;
@property (retain, nonatomic) VSRestrictionsCenter *restrictionsCenter;
@property (retain, nonatomic) VSAccountChannels *accountChannels;
@property (copy, nonatomic) NSArray *knownAppBundles;
@property (copy, nonatomic) NSArray *unredeemedVouchers;
@property (nonatomic) BOOL needsUpdateApps;
@property (nonatomic) int registrationToken;
@property (retain, nonatomic) VSAppSettingsViewModel *mvpdAppSettingsViewModel;
@property (nonatomic) BOOL needsPresentationOfMVPDAppInstallPromptIfAvailable;
@property (retain, nonatomic) UIViewController *mvpdInstallPromptPresentingViewController;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (nonatomic) BOOL hasChannelApps;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (id)init;
- (void).cxx_destruct;
- (void)_updateApps;
- (id)initWithStorage:(id)a0 restrictionsCenter:(id)a1;
- (id)viewModelsForChannelAppDescriptions:(id)a0 andNonChannelAppDescriptions:(id)a1;
- (id)viewModelsForAppDescriptions:(id)a0 bundleByBundleID:(id)a1 vouchersForProvider:(id)a2 restrictionsCenter:(id)a3 privacyFacade:(id)a4;
- (void)_setNeedsUpdateApps;
- (BOOL)shouldShowMVPDAppInstallPromptFromViewController:(id)a0;
- (BOOL)shouldShowMVPDAppInstallPrompt;
- (void)presentMVPDAppInstallPromptFromViewController:(id)a0;

@end
