@class NSArray, NSString, NSMutableSet;

@interface AVIterableCache : NSCache <NSCacheDelegate> {
    NSMutableSet *_allObjectsSet;
}

@property (readonly) NSArray *allObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;

@end
