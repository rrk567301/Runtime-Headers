@interface PPEvictingMinPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (unsigned long long)capacity;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (id)getMinItemWithoutPopping;
- (void)dealloc;
- (id)extractSortedMutableArray;
- (id)popItem;

@end
