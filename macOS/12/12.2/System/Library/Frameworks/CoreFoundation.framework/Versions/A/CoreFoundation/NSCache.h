@class NSString;
@protocol NSCacheDelegate;

@interface NSCache : NSObject {
    id _delegate;
    void *_private[5];
    void *_reserved;
}

@property (copy) NSString *name;
@property id<NSCacheDelegate> delegate;
@property unsigned long long totalCostLimit;
@property unsigned long long countLimit;
@property BOOL evictsObjectsWithDiscardedContent;

- (id)mapTableRepresentation;
- (void)dealloc;
- (id)init;
- (void)removeAllObjects;
- (id)allObjects;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)setMinimumObjectCount:(unsigned long long)a0;
- (unsigned long long)minimumObjectCount;
- (BOOL)evictsObjectsWhenApplicationEntersBackground;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)a0;
- (void)__apply:(id /* block */)a0;

@end
