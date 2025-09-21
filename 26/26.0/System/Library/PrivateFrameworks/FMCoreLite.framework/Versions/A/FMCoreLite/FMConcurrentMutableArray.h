@class NSMutableArray, FMReadWriteLock;

@interface FMConcurrentMutableArray : NSObject

@property (retain, nonatomic) NSMutableArray *underlyingArray;
@property (retain, nonatomic) FMReadWriteLock *lock;
@property (readonly, nonatomic) unsigned long long count;

- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)init;
- (void)addObject:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)nativeArray;

@end
