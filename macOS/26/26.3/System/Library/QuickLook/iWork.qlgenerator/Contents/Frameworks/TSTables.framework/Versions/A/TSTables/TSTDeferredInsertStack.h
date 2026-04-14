@interface TSTDeferredInsertStack : NSObject {
    struct vector<TSTExprNodeInsertWork, std::allocator<TSTExprNodeInsertWork>> { struct TSTExprNodeInsertWork *__begin_; struct TSTExprNodeInsertWork *__end_; struct { struct TSTExprNodeInsertWork *__cap_; } ; } _deferredWorkStack;
}

@property (nonatomic) unsigned int printingOptions;
@property (readonly, nonatomic) BOOL isEmpty;

- (void)pop;
- (void).cxx_destruct;
- (const struct TSTExprNodeInsertWork { id x0; unsigned long long x1; } *)top;
- (void)push:(const struct TSTExprNodeInsertWork { id x0; unsigned long long x1; } *)a0;
- (id).cxx_construct;

@end
