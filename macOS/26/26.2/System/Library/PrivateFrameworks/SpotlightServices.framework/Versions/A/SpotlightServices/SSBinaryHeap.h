@interface SSBinaryHeap : NSObject {
    struct __CFBinaryHeap { } *_binaryHeap;
    id /* block */ _comparator;
    unsigned long long _maxCount;
}

- (unsigned long long)countForObject:(id)a0;
- (unsigned long long)count;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (BOOL)containsObject:(id)a0;
- (id)minimumValue;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)dealloc;
- (void)removeAllObjects;
- (id)initWithComparator:(id /* block */)a0 maxCount:(unsigned long long)a1;
- (void)removeMinimumValue;

@end
