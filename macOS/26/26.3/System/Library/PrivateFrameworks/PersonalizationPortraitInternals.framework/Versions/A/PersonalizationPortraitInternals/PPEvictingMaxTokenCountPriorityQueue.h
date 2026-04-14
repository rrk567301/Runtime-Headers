@interface PPEvictingMaxTokenCountPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (unsigned long long)capacity;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void)dealloc;
- (id)popItem;
- (void)enumerateTokenCountsUsingBlock:(id /* block */)a0;
- (id)getMaxItemWithoutPopping;

@end
