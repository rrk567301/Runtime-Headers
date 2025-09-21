@class _MTL4CommitFeedbackDispatch;

@interface MTL4CommitOptions : NSObject {
    _MTL4CommitFeedbackDispatch *_commitFeedbackDispatch;
}

- (void)dealloc;
- (id)init;
- (void)addFeedbackHandler:(id /* block */)a0;
- (id)commitFeedbackDispatch;
- (void)setCommitFeedbackDispatch:(id)a0;

@end
