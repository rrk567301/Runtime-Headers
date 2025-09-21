@class NSArray, NSMutableArray;

@interface KHDBHeap : NSObject <NSCopying> {
    int _spinlock;
    NSMutableArray *_heap;
    unsigned int _options;
}

@property (retain, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) BOOL sortAscending;
@property (nonatomic) BOOL useLocking;

+ (void)testHeaps;

- (void)_lock;
- (void)_unlock;
- (void)addObjects:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (id)description;
- (long long)compareObject:(id)a0 toObject:(id)a1;
- (id)topObject;
- (id)removeTopObject;
- (BOOL)valueForOption:(unsigned int)a0;
- (id)initWithCapacity:(unsigned long long)a0 sortDescriptors:(id)a1;
- (id)initWithCapacity:(unsigned long long)a0 sortDescriptors:(id)a1 options:(long long)a2;
- (void)setValue:(BOOL)a0 forOption:(unsigned int)a1;

@end
