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
    id _keyBagLockStatusObservationToken;
    BOOL _shouldReadFromKeychainAfterKeyBagIsUnlocked;
}

@property (weak, nonatomic) id<SFContentBlockerManagerDelegate> delegate;
@property (weak, nonatomic) id<SFWebExtensionContentBlockerManagerDelegate> webExtensionDelegate;
@property (readonly, nonatomic) NSArray *contentBlockers;
@property (readonly, nonatomic) NSArray *enabledContentBlockers;

+ (id)sharedManager;
+ (void)reloadContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getStateOfContentBlockerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_contentBlockerDidRequestReload:(id)a0;
- (void)_deleteStateForRemovedContentBlockersTimerFired:(id)a0;
- (id)_developerIdentifierForContentBlocker:(id)a0;
- (id)_composedIdentifierForEnabledStateOfContentBlockerWithBundleIdentifier:(id)a0 developerIdentifier:(id)a1;
- (id)_composedIdentifierForEnabledStateOfContentBlocker:(id)a0;
- (id)_readContentBlockersState;
- (BOOL)_hasAnyEnabledContentBlockers;
- (void)_writeContentBlockersStateToStore;
- (id)_stateForContentBlockerWithComposedIdentifier:(id)a0;
- (BOOL)_contentBlockerIsEnabledWithComposedIdentifier:(id)a0;
- (void)_extensionsWereGloballyDisabled;
- (void)_extensionsWereGloballyEnabled;
- (BOOL)_contentBlockerIsEnabled:(id)a0;
- (BOOL)_anyContentBlockerEnabled;
- (void)_updateHash:(id)a0 forContentBlocker:(id)a1;
- (void)_setContentBlocker:(id)a0 isEnabled:(BOOL)a1;
- (void)_setContentBlocker:(id)a0 isEnabled:(BOOL)a1 byUserGesture:(BOOL)a2;
- (void)_setContentBlocker:(id)a0 isEnabled:(BOOL)a1 byUserGesture:(BOOL)a2 skipSavingToStore:(BOOL)a3;
- (id)_contentBlockerWithUUID:(id)a0;
- (id)_contentBlockerWithComposedIdentifier:(id)a0;
- (void)_loadEnabledContentBlockers;
- (void)_findContentBlockerAppExtensions;
- (void)loadSuitableDiscoveredContentBlockers;
- (void)_loadContentBlockersIfNecessary:(id)a0;
- (void)_setContentBlockerIdentifierToStateMap:(id)a0 forContentBlockerWithComposedIdentifier:(id)a1 skipSavingToStore:(BOOL)a2;
- (void)_updateContentBlockerStateAfterContentBlockerWasRemovedWithComposedIdentifier:(id)a0;
- (void)_deleteStateForRemovedContentBlockerSoon;
- (void)_deleteStateForRemovedContentBlockersAfterDelay:(double)a0;
- (void)_deleteStateForRemovedContentBlockers;
- (void)_deleteStateForContentBlockerWithComposedIdentifier:(id)a0;
- (void)_applyEnabledContentBlockers;
- (void)_blockedContentBlockersDidChange;
- (void)_disableUnsignedContentBlockersIfNecessary;
- (void)_resetContentBlockersState;
- (void)_applyEnabledWebExtensionContentBlockers;
- (void)_listenForKeyBagUnlockEvent;
- (void)_handleKeyBagUnlock;

@end
