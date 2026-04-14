@interface LNBinaryHeap : NSObject {
    struct __CFBinaryHeap { } *_binaryHeap;
    unsigned long long _capacity;
    id /* block */ _comparator;
    id /* block */ _policy;
}

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)peek;
- (BOOL)insertObject:(id)a0;
- (id)popObject;
- (id)initWithCapacity:(unsigned long long)a0 comparator:(id /* block */)a1 admissionPolicy:(id /* block */)a2;

@end
