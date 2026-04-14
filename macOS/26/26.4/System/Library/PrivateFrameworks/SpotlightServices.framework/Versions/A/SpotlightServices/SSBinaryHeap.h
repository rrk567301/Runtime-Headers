@interface SSBinaryHeap : NSObject {
    struct __CFBinaryHeap { } *_binaryHeap;
    id /* block */ _comparator;
    unsigned long long _maxCount;
}

- (unsigned long long)countForObject:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (id)minimumValue;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithComparator:(id /* block */)a0 maxCount:(unsigned long long)a1;
- (void)removeMinimumValue;

@end
