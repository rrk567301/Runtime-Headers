@class NSSet, NSDictionary, NSString, CHSChronoServicesConnection, CHSWidgetExtensionProvider, NSMutableSet;

@interface CHSWidgetDescriptorProvider : NSObject <BSDescriptionProviding, CHSWidgetExtensionProviderObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_observing;
    CHSChronoServicesConnection *_lock_connection;
    NSDictionary *_lock_descriptorsByExtensionIdentifier;
    NSMutableSet *_lock_observers;
}

@property (retain, nonatomic) CHSWidgetExtensionProvider *extensionProvider;
@property (copy, nonatomic) id /* block */ eduModeProvider;
@property (readonly, copy, nonatomic) NSSet *descriptors;
@property (readonly, copy, nonatomic) NSDictionary *descriptorsByExtensionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)extensionsDidChangeForExtensionProvider:(id)a0;
- (void)_lock_addNewDescriptorsFromDescriptors:(id)a0;
- (BOOL)_isEDUMode;
- (id)initWithConnection:(id)a0 extensionProvider:(id)a1;
- (void)dealloc;
- (void)reloadDescriptorsForContainerIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchDescriptorsForContainerIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithConnection:(id)a0 extensionProvider:(id)a1 providerOptions:(id)a2;
- (void)removeObserver:(id)a0;
- (id)init;
- (id)initIncludingIntents:(BOOL)a0;
- (id)succinctDescription;
- (id)descriptorForPersonality:(id)a0;
- (id)initWithIncludeDefaultIntents:(BOOL)a0;
- (void)_lock_reloadContentAsynchronouslyForContainerIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)addObserver:(id)a0;
- (id)_descriptorsFromExtensions:(id)a0;
- (id)initIncludingIntents:(BOOL)a0 relevanceBacked:(BOOL)a1;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (void)_lock_notifyObserversDescriptorsDidChange;

@end
