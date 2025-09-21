@class NSString, MCMUserIdentityCache, NSMutableDictionary;

@interface MCMContainerClassPathCache : NSObject <MCMFlushable> {
    NSMutableDictionary *_lookup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lookupLock;
}

@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)containerClassPathForUserIdentity:(id)a0 containerConfig:(id)a1 typeClass:(Class)a2;
- (id)initWithUserIdentityCache:(id)a0;
- (void)_lock_flush;
- (id)containerClassPathWithURL:(id)a0 reference:(id)a1;
- (id)_lock_containerClassPathForUserIdentity:(id)a0 containerConfig:(id)a1 typeClass:(Class)a2;
- (void)flush;
- (id)containerClassPathForContainerIdentity:(id)a0 typeClass:(Class)a1;
- (void)userIdentityCache:(id)a0 didInvalidateUserIdentity:(id)a1;
- (void)userIdentityCache:(id)a0 didAddUserIdentity:(id)a1;
- (id)referenceForPOSIXUser:(id)a0;
- (void).cxx_destruct;

@end
