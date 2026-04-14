@interface SSBinaryHeap : NSObject {
    struct __CFBinaryHeap { } *_binaryHeap;
    id /* block */ _comparator;
    unsigned long long _maxCount;
}

- (unsigned long long)countForObject:(id)a0;
- (void)dealloc;
- (id)minimumValue;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithComparator:(id /* block */)a0 maxCount:(unsigned long long)a1;
- (void)removeMinimumValue;

@end
