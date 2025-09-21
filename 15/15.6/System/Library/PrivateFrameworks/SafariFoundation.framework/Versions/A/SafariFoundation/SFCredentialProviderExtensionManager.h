@class NSSet, NSArray, NSString, NSMutableOrderedSet, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface SFCredentialProviderExtensionManager : NSObject <WBSDeallocationSentinelObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    id _extensionMatchingToken;
    NSSet *_extensions;
    NSMutableOrderedSet *_observers;
    NSHashTable *_weakObservers;
    char _errorEncounteredDuringLastExtensionDiscovery;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _observerLock;
    char _shouldOverrideAtLeastOneExtensionSupportsPasskeys;
    char _overrideAtLeastOneExtensionSupportsPasskeysValue;
}

@property (class, readonly) SFCredentialProviderExtensionManager *sharedManager;

@property (readonly, nonatomic) NSSet *extensions;
@property (readonly, nonatomic) NSSet *extensionsSync;
@property (readonly, nonatomic) NSArray *enabledExtensions;
@property (readonly, nonatomic) unsigned long long numberOfAutoFillProvidersEnabled;
@property (readonly, nonatomic) NSArray *getEnabledExtensionsSynchronously;
@property (readonly, nonatomic) char atLeastOneEnabledExtensionSupportsPasskeys;
@property (readonly, nonatomic) char atLeastOneEnabledExtensionSupportsOneTimeCodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)sentinelDidDeallocateWithContext:(id)a0;
- (void)getAllExtensionsWithCompletion:(id /* block */)a0;
- (void)_addObserverOnInternalQueue:(id)a0 shouldHoldWeakly:(char)a1;
- (void)_beginExtensionDiscovery;
- (void)_endExtensionDiscovery;
- (id)_extensions;
- (void)_getExtensionsIncludingDisabled:(char)a0 completionHandler:(id /* block */)a1;
- (void)_notifyObservers:(id)a0;
- (unsigned long long)_numberOfAutoFillProvidersEnabledWithExtensions:(id)a0;
- (void)_observerWasRemovedOnInternalQueue;
- (void)_updateExtensions:(id)a0;
- (void)addWeakObserver:(id)a0;
- (char)atLeastOneAvailableExtensionSupportsCredentialExchange:(id)a0;
- (char)canEnableCredentialProviderExtension;
- (id)displayNameForExtension:(id)a0;
- (id)enabledExtensionWithContainingAppBundleID:(id)a0;
- (char)extensionIsEnabled:(id)a0;
- (id)extensionSupportedCredentialExchangeFormatVersions:(id)a0;
- (char)extensionSupportsConditionalPasskeyRegistration:(id)a0;
- (char)extensionSupportsCredentialExchange:(id)a0;
- (char)extensionSupportsOneTimeCodes:(id)a0;
- (char)extensionSupportsPasskeys:(id)a0;
- (char)extensionSupportsPasswords:(id)a0;
- (void)getAllExtensionsForContainingApp:(id)a0 completion:(id /* block */)a1;
- (void)getEnabledExtensionsWithCompletion:(id /* block */)a0;
- (void)getExtensionWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)numberOfAutoFillProvidersEnabledWithCompletion:(id /* block */)a0;
- (void)setExtension:(id)a0 isEnabled:(char)a1;
- (char)shouldShowConfigurationUIForEnablingExtension:(id)a0;
- (id)supportedCredentialTypesStringForExtension:(id)a0;
- (void)test_overrideAtLeastOneExtensionSupportsPasskeys:(char)a0;

@end
