@class __end_cap_, __end_;

@interface FICompoundNodeIterator : FINodeIterator {
    struct vector<FINodeIterator *, std::allocator<FINodeIterator *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<FINodeIterator *__strong *, std::allocator<FINodeIterator *>> { id *__value_; } x1; } _subIterators;
    unsigned long long fCurrentIterator;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)next;
- (unsigned long long)estimatedSize;
- (id)first;
- (BOOL)fullyPopulated;
- (id)initWithFINodes:(id)a0 iteratorIncludingInvisibleItems:(BOOL)a1;

@end
