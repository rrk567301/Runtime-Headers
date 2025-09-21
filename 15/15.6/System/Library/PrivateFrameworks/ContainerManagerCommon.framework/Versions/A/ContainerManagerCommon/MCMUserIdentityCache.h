@class NSObject, MCMUserIdentity, NSDictionary, NSMutableDictionary, NSHashTable, NSSet, NSString;
@protocol OS_dispatch_queue, MCMContainerClassIterator, OS_xpc_object;

@interface MCMUserIdentityCache : NSObject <MCMUserIdentityCache> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_flushQueue;
    NSObject<OS_xpc_object> *_listener;
    char _fetchedFromUM;
    char _firstFetch;
}

@property (nonatomic) char cacheInvalid;
@property (readonly, nonatomic) NSDictionary *lock_bundleToDataSeparatedIdentitiesMap;
@property (readonly, nonatomic) NSDictionary *lock_personaUniqueStringToUserIdentityMap;
@property (readonly, nonatomic) NSDictionary *lock_personaIDToUserIdentityMap;
@property (readonly, nonatomic) MCMUserIdentity *lock_userIdentityForPersonalPersona;
@property (readonly, nonatomic) MCMUserIdentity *lock_userIdentityForUnspecificPersona;
@property (readonly, nonatomic) NSMutableDictionary *lock_managedPathRegistryForUserIdentity;
@property (readonly, nonatomic) NSMutableDictionary *lock_libraryRepairForUserIdentity;
@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSSet *previousUserIdentities;
@property (nonatomic) unsigned long long savedGeneration;
@property (readonly, nonatomic) id<MCMContainerClassIterator> classIterator;
@property (readonly, nonatomic) MCMUserIdentity *defaultUserIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)personasAreSupported;
+ (id)defaultUserIdentity;
+ (id)globalBundleUserIdentity;
+ (id)globalSystemUserIdentity;
+ (id)userIdentityWithPersonaAttributes:(id)a0;
+ (id)userIdentityWithPersonaAttributes:(id)a0 POSIXUser:(id)a1 forceUnspecific:(char)a2;
+ (id)userIdentityWithPersonaAttributes:(id)a0 forceUnspecific:(char)a1;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)flush;
- (void)_lock_flush;
- (id)userIdentityForLegacyMobileUser;
- (void)_lock_flushAndRepopulateWithUserIdentities:(id)a0;
- (void)_lock_resync;
- (char)_lock_resync_fromUserPersonaAttributes:(id)a0;
- (id)_lock_userIdentitiesForBundleIdentifier:(id)a0;
- (id)_lock_userIdentityForCurrentUserWithPersonaUniqueString:(id)a0;
- (void)_notifyObserversOfChangesWithUserIdentities:(id)a0 firstFetch:(char)a1;
- (void)_refreshFromUserManagementIfNecessary;
- (id)allAccessibleUserIdentities;
- (void)flushAndRepopulateWithUserIdentities:(id)a0;
- (void)forEachAccessibleUserIdentitySynchronouslyExecuteBlock:(id /* block */)a0;
- (id)globalBundleUserIdentity;
- (id)globalSystemUserIdentity;
- (id)libraryRepairForUserIdentity:(id)a0;
- (id)managedUserPathRegistryForUserIdentity:(id)a0;
- (id)personaUniqueStringForCurrentContext;
- (id)unspecificUserIdentity;
- (id)userIdentitiesForBundleIdentifier:(id)a0;
- (id)userIdentitiesForContainerConfig:(id)a0 originatorUserIdentities:(id)a1;
- (id)userIdentityForClient:(struct container_client { unsigned long long x0; char *x1; char *x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; struct { unsigned int x0[8]; } x7; int x8; BOOL x9; BOOL x10; BOOL x11; id x12; } *)a0 error:(id *)a1;
- (id)userIdentityForContainerConfig:(id)a0 originatorUserIdentity:(id)a1;
- (id)userIdentityForCurrentContext;
- (id)userIdentityForCurrentUserWithPersonaUniqueString:(id)a0;
- (id)userIdentityForPersonaUniqueString:(id)a0 POSIXUser:(id)a1;
- (id)userIdentityForPersonalPersona;
- (id)userIdentityForPersonalPersonaWithPOSIXUser:(id)a0;
- (id)userIdentityWithPersonaID:(unsigned int)a0;

@end
