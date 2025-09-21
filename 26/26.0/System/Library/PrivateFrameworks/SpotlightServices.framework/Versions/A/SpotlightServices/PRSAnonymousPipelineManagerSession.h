@class PARSession;

@interface PRSAnonymousPipelineManagerSession : PRSAnonymousPipelineManager

@property (retain, nonatomic) PARSession *session;

+ (id)sharedManager;

- (void)setFeedbackDelegate:(id)a0;
- (void)sendCustomFeedback:(id)a0;
- (id)init;
- (void)setPARSession:(id)a0;
- (void).cxx_destruct;

@end
