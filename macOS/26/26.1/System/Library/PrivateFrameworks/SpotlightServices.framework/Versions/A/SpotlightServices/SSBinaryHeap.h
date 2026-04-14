@interface SSBinaryHeap : NSObject {
    struct __CFBinaryHeap { } *_binaryHeap;
    id /* block */ _comparator;
    unsigned long long _maxCount;
}

- (unsigned long long)countForObject:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)removeAllObjects;
- (BOOL)containsObject:(id)a0;
- (void)dealloc;
- (id)minimumValue;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (id)initWithComparator:(id /* block */)a0 maxCount:(unsigned long long)a1;
- (void)removeMinimumValue;

@end
