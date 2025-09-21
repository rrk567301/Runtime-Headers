@class NSString, HDProfile, HDConcreteSyncIdentity, HDDatabaseValueCache;

@interface HDSyncIdentityManager : NSObject <HDProfileInitializedObserver, HDCloudSyncSyncIdentityManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDConcreteSyncIdentity *_currentSyncIdentity;
    HDConcreteSyncIdentity *_legacySyncIdentity;
    HDDatabaseValueCache *_entityByIdentityCache;
    HDDatabaseValueCache *_identityByEntityPersistentIDCache;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, copy, nonatomic) HDConcreteSyncIdentity *currentSyncIdentity;
@property (readonly, copy, nonatomic) HDConcreteSyncIdentity *legacySyncIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)unitTest_resetCachedHardwareIdentifier;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (id)childIdentitiesForCurrentSyncIdentityWithError:(id *)a0;
- (id)childIdentitiesForCurrentSyncIdentityWithTransaction:(id)a0 error:(id *)a1;
- (id)concreteIdentityForIdentity:(id)a0 shouldCreate:(char)a1 transaction:(id)a2 error:(id *)a3;
- (char)enumerateConcreteIdentitiesError:(id *)a0 enumerationHandler:(id /* block */)a1;
- (id)identityForEntityID:(long long)a0 transaction:(id)a1 error:(id *)a2;
- (void)profileDidInitialize:(id)a0;
- (char)rollCurrentSyncIdentityWithReason:(id)a0 error:(id *)a1;
- (char)updateIsChild:(char)a0 concreteIdentity:(id)a1 error:(id *)a2;

@end
