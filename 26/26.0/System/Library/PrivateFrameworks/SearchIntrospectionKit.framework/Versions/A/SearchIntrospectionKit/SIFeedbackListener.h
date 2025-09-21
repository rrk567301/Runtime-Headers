@interface SIFeedbackListener : NSObject <SIFeedbackListenerProtocol, SFFeedbackListener>

- (id)init;
- (void)sendResultSectionsDidLoadFeedback:(id)a0;

@end
