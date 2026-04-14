@interface CRCHNetworkCursor : NSObject {
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; unsigned long long *__cap_; } _edgeIndexes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addEdgeIndex:(unsigned long long)a0;
- (unsigned long long)edgeIndexAtPosition:(unsigned long long)a0;
- (unsigned long long)edgeIndexCount;

@end
