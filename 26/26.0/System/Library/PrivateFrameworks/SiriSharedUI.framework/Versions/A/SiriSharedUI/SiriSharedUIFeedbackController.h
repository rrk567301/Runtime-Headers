@class _TtC8Feedback23FBKEvaluationController, _TtC15FeedbackService14FBKSEvaluation;

@interface SiriSharedUIFeedbackController : NSViewController

@property (nonatomic) BOOL isProvidingFeedback;
@property (nonatomic, retain) _TtC8Feedback23FBKEvaluationController *feedbackController;
@property (nonatomic, retain) _TtC15FeedbackService14FBKSEvaluation *evaluationResult;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)userDidReportConcernForSuggestionsWithModel:(id)a0;
- (void)userDidReportConcernWithModel:(id)a0;

@end
