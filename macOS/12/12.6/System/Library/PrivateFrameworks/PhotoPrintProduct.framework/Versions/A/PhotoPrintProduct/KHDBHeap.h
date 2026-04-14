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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)_lock;
- (long long)compareObject:(id)a0 toObject:(id)a1;
- (void)addObjects:(id)a0;
- (void)_unlock;
- (id)topObject;
- (id)initWithCapacity:(unsigned long long)a0 sortDescriptors:(id)a1 options:(long long)a2;
- (BOOL)valueForOption:(unsigned int)a0;
- (id)initWithCapacity:(unsigned long long)a0 sortDescriptors:(id)a1;
- (void)setValue:(BOOL)a0 forOption:(unsigned int)a1;
- (id)removeTopObject;

@end
