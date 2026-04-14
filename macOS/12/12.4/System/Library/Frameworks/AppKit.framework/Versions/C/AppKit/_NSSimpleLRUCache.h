@class NSMutableArray;

@interface _NSSimpleLRUCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _seed;
    unsigned long long _limit;
    NSMutableArray *_keys;
    NSMutableArray *_values;
}

- (void)dealloc;
- (id)init;
- (id)initWithLimit:(unsigned long long)a0;
- (id)objectForKey:(id)a0 creationBlock:(id /* block */)a1;

@end
