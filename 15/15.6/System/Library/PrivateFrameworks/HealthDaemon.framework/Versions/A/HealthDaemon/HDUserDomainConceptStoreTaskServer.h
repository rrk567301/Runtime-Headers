@class NSString, HDUserDomainConceptManager;

@interface HDUserDomainConceptStoreTaskServer : HDStandardTaskServer <HDUserDomainConceptObserver, HKUserDomainConceptStoreServerInterface> {
    HDUserDomainConceptManager *_userDomainConceptManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _shouldObserveChanges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (void)dealloc;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_createAndStoreUserDomainConceptWithConceptIdentifier:(id)a0 additionalProperties:(id)a1 userDomainConceptTypeIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)remote_observeUserDomainConceptChanges:(char)a0 completion:(id /* block */)a1;
- (void)remote_storeUserDomainConcepts:(id)a0 method:(long long)a1 completion:(id /* block */)a2;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)userDomainConceptManager:(id)a0 didAddUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didDeleteUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didJournalUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didUpdateUserDomainConcepts:(id)a1;

@end
