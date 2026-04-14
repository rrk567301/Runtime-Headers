@interface ITFFeedbackListener : NSObject <ITFFeedbackListenerProtocol>

+ (id)sharedFeedbackListener;

- (void).cxx_destruct;
- (id)init;
- (void)sendResponseDidReturnComposeFeedback:(id)a0;
- (void)sendResponseDidReturnRewriteFeedback:(id)a0;
- (void)sendResponseDidReturnRewriteFeedbackWithError:(id)a0;

@end
