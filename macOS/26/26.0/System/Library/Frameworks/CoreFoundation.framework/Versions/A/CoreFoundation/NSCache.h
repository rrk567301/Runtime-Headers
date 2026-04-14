@class NSString;
@protocol NSCacheDelegate;

@interface NSCache : NSObject {
    id<NSCacheDelegate> _cacheDelegate;
    struct cache_s { } *_cache;
    unsigned char _discardableContentState;
    BOOL _evictOnSuspension;
    BOOL _evictsDiscarded;
    BOOL _moribund;
    BOOL _doDelegateWillEvictValue;
    BOOL _observesNotification;
    unsigned long long _notificationToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _notificationLock;
}

@property (copy) NSString *name;
@property id<NSCacheDelegate> delegate;
@property unsigned long long totalCostLimit;
@property unsigned long long countLimit;
@property BOOL evictsObjectsWithDiscardedContent;

- (id)mapTableRepresentation;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (id)allObjects;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)__apply:(id /* block */)a0;
- (BOOL)evictsObjectsWhenApplicationEntersBackground;
- (unsigned long long)minimumObjectCount;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)a0;
- (void)setMinimumObjectCount:(unsigned long long)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;

@end
