@interface _MTL4CommitFeedbackDispatch : NSObject {
    struct vector<void (^)(id<MTL4CommitFeedback>), std::allocator<void (^)(id<MTL4CommitFeedback>)>> { id /* block */ *__begin_; id /* block */ *__end_; struct { id /* block */ *__cap_; } ; } _feedbackNotificationBlocks;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (void)addFeedbackHandler:(id /* block */)a0;
- (void)executeBlocksWithCommitFeedback:(id)a0;

@end
