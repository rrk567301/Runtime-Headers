@class TSCEPartialResultTree, TSCEPartialResult, __cap_, __end_;

@interface TSCEPartialResultTreeEnumerator : NSObject {
    TSCEPartialResultTree *_tree;
    struct vector<TSCEPartialResult *, std::allocator<TSCEPartialResult *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _inProgressStack;
    TSCEPartialResult *_lastResult;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setCurrentResult:(id)a0;
- (id)nextResult;
- (id)initWithPartialResultTree:(id)a0;

@end
