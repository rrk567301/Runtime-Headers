@interface PPEvictingMaxTokenCountPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (unsigned long long)capacity;
- (void)addObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)popItem;
- (id)init;
- (void)dealloc;
- (void)enumerateTokenCountsUsingBlock:(id /* block */)a0;
- (id)getMaxItemWithoutPopping;

@end
