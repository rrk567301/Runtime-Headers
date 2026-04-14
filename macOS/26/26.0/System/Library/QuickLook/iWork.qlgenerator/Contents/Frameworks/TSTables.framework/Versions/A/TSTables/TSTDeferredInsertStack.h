@interface TSTDeferredInsertStack : NSObject {
    struct vector<TSTExprNodeInsertWork, std::allocator<TSTExprNodeInsertWork>> { struct TSTExprNodeInsertWork *__begin_; struct TSTExprNodeInsertWork *__end_; struct TSTExprNodeInsertWork *__cap_; } _deferredWorkStack;
}

@property (nonatomic) unsigned int printingOptions;
@property (readonly, nonatomic) BOOL isEmpty;

- (void)push:(const struct TSTExprNodeInsertWork { id x0; unsigned long long x1; } *)a0;
- (void)pop;
- (const struct TSTExprNodeInsertWork { id x0; unsigned long long x1; } *)top;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
