@class NSArray, NSMutableDictionary, NSTimer;
@protocol SFContentBlockerManagerDelegate, SFWebExtensionContentBlockerManagerDelegate;

@interface SFContentBlockerManager : NSObject {
    id _extensionMatchingContext;
    NSArray *_allDiscoveredContentBlockers;
    NSArray *_contentBlockers;
    NSArray *_enabledContentBlockers;
    id<SFContentBlockerManagerDelegate> _delegate;
    id<SFWebExtensionContentBlockerManagerDelegate> _webExtensionDelegate;
    NSMutableDictionary *_contentBlockerIdentifierToStateMap;
    NSMutableDictionary *_contentBlockerUniqueIdentifierToDeveloperIdentifierCache;
    NSTimer *_deleteStateForRemovedContentBlockerTimer;
}

@property (weak, nonatomic) id<SFContentBlockerManagerDelegate> delegate;
@property (weak, nonatomic) id<SFWebExtensionContentBlockerManagerDelegate> webExtensionDelegate;
@property (readonly, nonatomic) NSArray *contentBlockers;
@property (readonly, nonatomic) NSArray *enabledContentBlockers;

+ (id)sharedManager;
+ (void)getStateOfContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)reloadContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_extensionsWereGloballyDisabled;
- (BOOL)_anyContentBlockerEnabled;
- (void)_applyEnabledContentBlockers;
- (void)_applyEnabledWebExtensionContentBlockers;
- (void)_blockedContentBlockersDidChange;
- (id)_composedIdentifierForEnabledStateOfContentBlocker:(id)a0;
- (id)_composedIdentifierForEnabledStateOfContentBlockerWithBundleIdentifier:(id)a0 developerIdentifier:(id)a1;
- (void)_contentBlockerDidRequestReload:(id)a0;
- (BOOL)_contentBlockerIsEnabled:(id)a0;
- (BOOL)_contentBlockerIsEnabledWithComposedIdentifier:(id)a0;
- (id)_contentBlockerWithComposedIdentifier:(id)a0;
- (id)_contentBlockerWithUUID:(id)a0;
- (void)_deleteStateForContentBlockerWithComposedIdentifier:(id)a0;
- (void)_deleteStateForRemovedContentBlockerSoon;
- (void)_deleteStateForRemovedContentBlockers;
- (void)_deleteStateForRemovedContentBlockersAfterDelay:(double)a0;
- (void)_deleteStateForRemovedContentBlockersTimerFired:(id)a0;
- (id)_developerIdentifierForContentBlocker:(id)a0;
- (void)_disableUnsignedContentBlockersIfNecessary;
- (void)_extensionsWereGloballyEnabled;
- (void)_findContentBlockerAppExtensions;
- (BOOL)_hasAnyEnabledContentBlockers;
- (void)_loadContentBlockersIfNecessary:(id)a0;
- (void)_loadEnabledContentBlockers;
- (id)_readContentBlockersState;
- (void)_resetContentBlockersState;
- (void)_setContentBlockerIdentifierToStateMap:(id)a0 forContentBlockerWithComposedIdentifier:(id)a1 skipSavingToStore:(BOOL)a2;
- (id)_stateForContentBlockerWithComposedIdentifier:(id)a0;
- (void)_updateContentBlockerStateAfterContentBlockerWasRemovedWithComposedIdentifier:(id)a0;
- (void)_updateHash:(id)a0 forContentBlocker:(id)a1;
- (void)_writeContentBlockersStateToStore;
- (void)loadSuitableDiscoveredContentBlockers;
- (void)setContentBlocker:(id)a0 isEnabled:(BOOL)a1 byUserGesture:(BOOL)a2 skipSavingToStore:(BOOL)a3;
- (id)userVisiblePermissionsForContentBlocker:(id)a0;

@end
