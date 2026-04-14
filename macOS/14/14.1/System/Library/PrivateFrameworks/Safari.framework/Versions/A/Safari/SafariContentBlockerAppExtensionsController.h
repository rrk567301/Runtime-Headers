@class WBProfile, NSString, WKUserContentController, NSMutableSet, WKContentRuleListStore, NSObject, WBSCoreAnalyticsExtensionsStatistics;
@protocol OS_dispatch_queue;

@interface SafariContentBlockerAppExtensionsController : NSObject <SFContentBlockerManagerDelegate, WBSCloudExtensionStateProvider> {
    NSMutableSet *_contentBlockersInInvalidAppBundles;
    NSObject<OS_dispatch_queue> *_appBundleValidationQueue;
    WKContentRuleListStore *_contentBlockerStore;
    NSString *_profileServerID;
    WKUserContentController *_profileUserContentController;
}

@property (readonly, nonatomic) WBProfile *profile;
@property (readonly, nonatomic) WKContentRuleListStore *contentBlockerStore;
@property (readonly, nonatomic) WBSCoreAnalyticsExtensionsStatistics *extensionStatisticsReport;
@property (readonly, nonatomic) NSString *crashReporterMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentBlockerLoaderConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_extensionsWereGloballyDisabled;
- (BOOL)shouldDisableAllContentBlockers;
- (void)_extensionsWereGloballyEnabled;
- (BOOL)allowUnsignedContentBlockers;
- (void)applyEnabledContentBlockers:(id)a0;
- (void)contentBlockerEnabledStateDidChange:(id)a0;
- (BOOL)contentBlockerIsEnabledInCloudWithComposedIdentifier:(id)a0;
- (id)contentBlockersFromContentBlockersState:(id)a0;
- (id)contentBlockersNotBlockedForAnyReason:(id)a0;
- (void)contentBlockersWereAdded:(id)a0;
- (void)contentBlockersWereRemoved:(id)a0;
- (id)developerIdentifierForContentBlocker:(id)a0;
- (void)didDeleteStateForRemovedContentBlockers;
- (void)enumerateContentBlockerManagersUsingBlock:(id /* block */)a0;
- (void)loadContentBlocker:(id)a0 previouslyLoadedHash:(id)a1 completionHandler:(id /* block */)a2;
- (void)newContentBlockersWereInstalled:(id)a0;
- (void)removeContentBlockerIfNecessary:(id)a0;
- (id)profileServerIDForStateManager:(id)a0;
- (void)_applyContentBlocker:(id)a0 fromExtension:(id)a1;
- (void)_applyContentBlockerToPrivateBrowsing:(id)a0;
- (BOOL)_contentBlockerIsEnabledInAnyProfile:(id)a0;
- (id)_contentBlockerManager;
- (void)_contentBlockerStateInPrivateBrowsingDidChange:(id)a0;
- (id)_contentBlockerStoreWithBundleIdentifier:(id)a0;
- (void)_removeContentBlockerFromPrivateBrowsing:(id)a0;
- (void)_unapplyContentBlockerWithIdentifier:(id)a0;
- (void)_updateContentBlockersCrashReporterMessage;
- (id)cloudExtensionStateForStateManager:(id)a0;
- (BOOL)hasExtensionWithComposedIdentifier:(id)a0;
- (id)initWithProfileServerID:(id)a0 userContentController:(id)a1;
- (void)loadBuiltInContentBlockers;
- (void)loadDeclarativeNetRequestContentBlockingRulesForExtensionWithIdentifier:(id)a0 previouslyLoadedHash:(id)a1 rules:(id)a2 completionHandler:(id /* block */)a3;
- (void)setExtensionWithComposedIdentifier:(id)a0 isEnabledInCloud:(BOOL)a1;

@end
