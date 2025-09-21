@interface PPEvictingMaxTokenCountPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (unsigned long long)capacity;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (void)addObject:(id)a0;
- (id)popItem;
- (void)enumerateTokenCountsUsingBlock:(id /* block */)a0;
- (id)getMaxItemWithoutPopping;

@end
