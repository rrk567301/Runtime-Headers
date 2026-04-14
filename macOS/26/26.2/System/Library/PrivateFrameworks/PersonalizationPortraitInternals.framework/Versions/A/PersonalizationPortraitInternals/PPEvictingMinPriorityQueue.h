@interface PPEvictingMinPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (id)extractSortedMutableArray;
- (id)popItem;
- (unsigned long long)capacity;
- (id)getMinItemWithoutPopping;
- (void)addObject:(id)a0;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;

@end
