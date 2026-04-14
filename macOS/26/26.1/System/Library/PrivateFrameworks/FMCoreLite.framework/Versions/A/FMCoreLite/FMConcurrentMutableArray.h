@class NSMutableArray, FMReadWriteLock;

@interface FMConcurrentMutableArray : NSObject

@property (retain, nonatomic) NSMutableArray *underlyingArray;
@property (retain, nonatomic) FMReadWriteLock *lock;
@property (readonly, nonatomic) unsigned long long count;

- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (void)addObject:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)init;
- (id)nativeArray;

@end
