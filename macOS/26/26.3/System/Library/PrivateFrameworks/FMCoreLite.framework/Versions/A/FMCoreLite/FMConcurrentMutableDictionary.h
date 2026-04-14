@class NSMutableDictionary, FMReadWriteLock;

@interface FMConcurrentMutableDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *underlyingDictionary;
@property (retain, nonatomic) FMReadWriteLock *lock;
@property (readonly, nonatomic) unsigned long long count;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)objectForKey:(id)a0;
- (id)popObjectforKey:(id)a0;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (id)nativeDictionary;
- (id)objectForKey:(id)a0 withConstructor:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)replaceObject:(id)a0 forKey:(id)a1;
- (id)initWithDictionary:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;

@end
