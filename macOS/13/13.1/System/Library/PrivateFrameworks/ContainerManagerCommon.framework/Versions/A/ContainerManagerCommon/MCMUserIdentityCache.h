@class NSObject, MCMUserIdentity, NSDictionary, NSMutableDictionary, NSHashTable, NSSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MCMUserIdentityCache : NSObject <MCMUserIdentityCache> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_flushQueue;
    NSObject<OS_xpc_object> *_listener;
}

@property (nonatomic) BOOL cacheInvalid;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)personasAreSupported;
+ (id)defaultUserIdentity;
+ (id)globalBundleUserIdentity;
+ (id)globalSystemUserIdentity;
+ (id)userIdentityWithPersonaAttributes:(id)a0;
+ (id)userIdentityWithPersonaAttributes:(id)a0 forceUnspecific:(BOOL)a1;
+ (id)userIdentityWithPersonaAttributes:(id)a0 POSIXUser:(id)a1 forceUnspecific:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)flush;
- (id)defaultUserIdentity;
- (id)globalBundleUserIdentity;
- (id)globalSystemUserIdentity;
- (id)userIdentityForPersonaUniqueString:(id)a0 POSIXUser:(id)a1;
- (id)userIdentityForPersonalPersonaWithPOSIXUser:(id)a0;
- (void)_refreshFromUserManagementIfNecessary;
- (id)userIdentitiesForBundleIdentifier:(id)a0;
- (id)userIdentityForCurrentUserWithPersonaUniqueString:(id)a0;
- (id)userIdentityForClient:(struct container_client { char *x0; unsigned int x1; char *x2; unsigned int x3; unsigned int x4; struct { unsigned int x0[8]; } x5; int x6; BOOL x7; BOOL x8; BOOL x9; id x10; } *)a0 error:(id *)a1;
- (id)userIdentityForPersonalPersona;
- (id)unspecificUserIdentity;
- (id)userIdentityWithPersonaID:(unsigned int)a0;
- (id)allAccessibleUserIdentities;
- (void)forEachAccessibleUserIdentitySynchronouslyExecuteBlock:(id /* block */)a0;
- (id)personaUniqueStringForCurrentContext;
- (id)userIdentityForCurrentContext;
- (id)userIdentityForLegacyMobileUser;
- (void)flushAndRepopulateWithUserIdentities:(id)a0;
- (id)managedUserPathRegistryForUserIdentity:(id)a0;
- (id)libraryRepairForUserIdentity:(id)a0;
- (id)_lock_userIdentitiesForBundleIdentifier:(id)a0;
- (id)_lock_userIdentityForCurrentUserWithPersonaUniqueString:(id)a0;
- (void)_lock_resync;
- (void)_lock_flush;
- (void)_lock_flushAndRepopulateWithUserIdentities:(id)a0;
- (BOOL)_lock_resync_fromUserPersonaAttributes:(id)a0;
- (void)_notifyObserversOfChangesWithUserIdentities:(id)a0;

@end
