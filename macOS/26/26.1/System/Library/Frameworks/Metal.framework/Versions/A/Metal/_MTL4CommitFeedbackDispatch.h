@interface _MTL4CommitFeedbackDispatch : NSObject {
    struct vector<void (^)(id<MTL4CommitFeedback>), std::allocator<void (^)(id<MTL4CommitFeedback>)>> { id /* block */ *__begin_; id /* block */ *__end_; id /* block */ *__cap_; } _feedbackNotificationBlocks;
}

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addFeedbackHandler:(id /* block */)a0;
- (void)executeBlocksWithCommitFeedback:(id)a0;

@end
