@class NSString, NSMutableSet, NSObject, WBSCoreAnalyticsExtensionsStatistics;
@protocol OS_dispatch_queue;

@interface SafariContentBlockerAppExtensionsController : NSObject <WBSCloudExtensionStateProvider, SFContentBlockerManagerDelegate> {
    NSMutableSet *_contentBlockersInInvalidAppBundles;
    NSObject<OS_dispatch_queue> *_appBundleValidationQueue;
}

@property (readonly, nonatomic) WBSCoreAnalyticsExtensionsStatistics *extensionStatisticsReport;
@property (readonly, nonatomic) NSString *crashReporterMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;
+ (id)_contentBlockerStoreWithBundleIdentifier:(id)a0;
+ (id)contentBlockerStore;
+ (id)contentBlockerStores;
+ (id)contentBlockerLoaderConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadContentBlocker:(id)a0 previouslyLoadedHash:(id)a1 completionHandler:(id /* block */)a2;
- (void)contentBlockerEnabledStateDidChange:(id)a0;
- (id)developerIdentifierForContentBlocker:(id)a0;
- (BOOL)allowUnsignedContentBlockers;
- (void)newContentBlockersWereInstalled:(id)a0;
- (BOOL)shouldDisableAllContentBlockers;
- (void)contentBlockersWereRemoved:(id)a0;
- (void)contentBlockersWereAdded:(id)a0;
- (id)contentBlockersNotBlockedForAnyReason:(id)a0;
- (void)didDeleteStateForRemovedContentBlockers;
- (id)contentBlockersFromContentBlockersState:(id)a0;
- (void)applyEnabledContentBlockers:(id)a0;
- (BOOL)contentBlockerIsEnabledInCloudWithComposedIdentifier:(id)a0;
- (void)removeContentBlockerWithIdentifier:(id)a0;
- (void)_extensionsWereGloballyDisabled;
- (void)_extensionsWereGloballyEnabled;
- (id)cloudExtensionStateForStateManager:(id)a0;
- (BOOL)hasExtensionWithComposedIdentifier:(id)a0;
- (void)setExtensionWithComposedIdentifier:(id)a0 isEnabledInCloud:(BOOL)a1;
- (void)_applyContentBlocker:(id)a0;
- (void)_unapplyContentBlockerWithIdentifier:(id)a0;
- (void)_updateContentBlockersCrashReporterMessage;
- (void)loadDeclarativeNetRequestContentBlockingRulesForExtensionWithIdentifier:(id)a0 previouslyLoadedHash:(id)a1 rules:(id)a2 completionHandler:(id /* block */)a3;

@end
