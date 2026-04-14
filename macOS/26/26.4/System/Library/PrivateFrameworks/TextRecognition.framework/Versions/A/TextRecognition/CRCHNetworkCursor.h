@interface CRCHNetworkCursor : NSObject {
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct { unsigned long long *__cap_; } ; } _edgeIndexes;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addEdgeIndex:(unsigned long long)a0;
- (unsigned long long)edgeIndexAtPosition:(unsigned long long)a0;
- (unsigned long long)edgeIndexCount;

@end
