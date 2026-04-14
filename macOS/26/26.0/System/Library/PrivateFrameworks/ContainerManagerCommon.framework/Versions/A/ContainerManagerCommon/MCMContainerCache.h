@class NSString, MCMUserIdentityCache, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, MCMChildParentMapCache;

@interface MCMContainerCache : NSObject <MCMContainerCache> {
    NSMutableDictionary *_queue_cache;
}

@property (readonly, nonatomic) id<MCMChildParentMapCache> childParentMapCache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) Class cacheEntryClass;
@property (readonly, nonatomic) Class classCacheClass;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_containerClassPathForUserIdentity:(id)a0 containerClass:(unsigned long long)a1 transient:(BOOL)a2;
- (id)addContainerMetadata:(id)a0 error:(id *)a1;
- (long long)countContainersForOtherUserIdentitiesWithIdentity:(id)a0 error:(id *)a1;
- (void)didAddUserIdentity:(id)a0;
- (id)_queue_containerClassCacheForUserIdentity:(id)a0 containerClass:(unsigned long long)a1 transient:(BOOL)a2;
- (void)setContainerClassCache:(id)a0;
- (id)initWithUserIdentityCache:(id)a0 childParentMapCache:(id)a1 classCacheClass:(Class)a2 cacheEntryClass:(Class)a3 queue:(id)a4;
- (id)_queue_containerClassCacheForContainerClassPath:(id)a0;
- (void)flushCacheForUserIdentity:(id)a0 containerClass:(unsigned long long)a1 transient:(BOOL)a2;
- (void)_queue_invalidateUserIdentity:(id)a0;
- (id)entryForContainerIdentity:(id)a0 classCache:(id)a1 error:(id *)a2;
- (id)entryForContainerIdentity:(id)a0 error:(id *)a1;
- (void)flush;
- (void)_queue_setContainerClassCache:(id)a0;
- (void)_queue_flushCacheForContainerClassPath:(id)a0;
- (id)classCacheForUserIdentity:(id)a0 containerClass:(unsigned long long)a1 transient:(BOOL)a2;
- (id)entriesForUserIdentities:(id)a0 contentClass:(unsigned long long)a1 transient:(BOOL)a2 error:(id *)a3;
- (void)didInvalidateUserIdentity:(id)a0;
- (id)initWithUserIdentityCache:(id)a0 childParentMapCache:(id)a1 classCacheClass:(Class)a2 cacheEntryClass:(Class)a3 error:(id *)a4;
- (void)notifyWithClassCache:(id)a0 existingEntry:(id)a1 newEntry:(id)a2;
- (id)classCacheForContainerIdentity:(id)a0;
- (BOOL)removeContainerForUserIdentity:(id)a0 contentClass:(unsigned long long)a1 identifier:(id)a2 transient:(BOOL)a3 error:(id *)a4;
- (void)_queue_flush;
- (void)invalidateUserIdentity:(id)a0;
- (void).cxx_destruct;

@end
