@class , TSCEPartialResultTree, TSCEPartialResult, __end_;

@interface TSCEPartialResultTreeEnumerator : NSObject {
    TSCEPartialResultTree *_tree;
    struct vector<TSCEPartialResult *, std::allocator<TSCEPartialResult *>> { __end_ **__begin_;  **x0; struct { id *__cap_; } x1; } _inProgressStack;
    TSCEPartialResult *_lastResult;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setCurrentResult:(id)a0;
- (id)nextResult;
- (id)initWithPartialResultTree:(id)a0;

@end
