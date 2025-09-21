@class NSString, NSMutableDictionary;

@interface PLGraphCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    NSMutableDictionary *_cacheLock_labelIDsByCode;
    BOOL _cacheLock_cacheIsPopulated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _idLock;
    long long _idLock_nextNodeExtIdentifier;
    long long _idLock_nextEdgeExtIdentifier;
}

@property (readonly) NSString *logPrefix;

+ (long long)_fetchNextAvailableExternalIdentifierInContext:(id)a0 forIdentifierEntity:(unsigned long long)a1;

- (void)clearCache;
- (id)init;
- (void).cxx_destruct;
- (id)objectIDForLabelWithCode:(int)a0 inContext:(id)a1;
- (id)cachedObjectIDForLabelWithCode:(int)a0;
- (id)_existingLabelWithID:(id)a0 inContext:(id)a1;
- (void)_lock_addLabelToCache:(id)a0;
- (void)_lock_clearCache;
- (void)_lock_fetchAndCacheWithLabelCode:(int)a0 inContext:(id)a1;
- (id)_lock_objectIDForLabelWithCode:(int)a0 inContext:(id)a1;
- (void)_lock_populateCacheIfNecessaryWithContext:(id)a0;
- (void)_lock_populateCacheWithAllLabelsInContext:(id)a0;
- (unsigned long long)countOfCachedObjectIDs;
- (id)labelWithCode:(int)a0 inContext:(id)a1;
- (void)resetNextAvailableEdgeExternalIdentifier;
- (long long)takeNextAvailableExternalIdentifierInContext:(id)a0 forIdentifierEntity:(unsigned long long)a1;

@end
