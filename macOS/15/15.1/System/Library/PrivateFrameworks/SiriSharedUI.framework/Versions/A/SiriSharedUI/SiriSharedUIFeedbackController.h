@interface SiriSharedUIFeedbackController : NSViewController {
    void /* unknown type, empty encoding */ feedbackController;
    void /* unknown type, empty encoding */ evaluationResult;
}

@property (nonatomic) void /* unknown type, empty encoding */ isProvidingFeedback;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)userDidReportConcernWithModel:(id)a0;

@end
