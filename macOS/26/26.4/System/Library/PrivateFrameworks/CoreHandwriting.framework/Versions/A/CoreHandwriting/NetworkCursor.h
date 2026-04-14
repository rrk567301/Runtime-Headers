@interface NetworkCursor : NSObject {
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct { unsigned long long *__cap_; } ; } _nodeIndexes;
    unsigned long long _stateType;
}

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (BOOL)isCompletePattern;

@end
