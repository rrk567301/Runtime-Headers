@interface NetworkCursor : NSObject {
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; unsigned long long *__cap_; } _nodeIndexes;
    unsigned long long _stateType;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isCompletePattern;

@end
