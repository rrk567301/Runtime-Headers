@interface PPEvictingMaxTokenCountPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (id)popItem;
- (unsigned long long)capacity;
- (void)addObject:(id)a0;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (void)enumerateTokenCountsUsingBlock:(id /* block */)a0;
- (id)getMaxItemWithoutPopping;

@end
