@class BSMutableOrderedDictionary;

@interface PFLRUCache : NSObject <NSCopying> {
    BSMutableOrderedDictionary *_storage;
}

@property (nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) unsigned long long count;

+ (id)new;

- (void)_cleanup;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)_promoteObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0 ifNil:(id /* block */)a1;

@end
