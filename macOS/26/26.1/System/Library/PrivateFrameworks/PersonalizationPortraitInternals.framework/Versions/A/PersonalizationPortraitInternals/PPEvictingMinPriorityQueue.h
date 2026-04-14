@interface PPEvictingMinPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (unsigned long long)capacity;
- (id)getMinItemWithoutPopping;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)extractSortedMutableArray;
- (id)popItem;
- (void)addObject:(id)a0;
- (id)init;

@end
