@interface PPEvictingMinPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (unsigned long long)capacity;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (void)addObject:(id)a0;
- (id)getMinItemWithoutPopping;
- (id)extractSortedMutableArray;
- (id)popItem;

@end
