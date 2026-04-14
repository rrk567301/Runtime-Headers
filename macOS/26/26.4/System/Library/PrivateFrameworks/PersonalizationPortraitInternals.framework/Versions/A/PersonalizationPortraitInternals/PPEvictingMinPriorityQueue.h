@interface PPEvictingMinPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (unsigned long long)capacity;
- (id)getMinItemWithoutPopping;
- (void)addObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)extractSortedMutableArray;
- (id)popItem;
- (id)init;
- (void)dealloc;

@end
