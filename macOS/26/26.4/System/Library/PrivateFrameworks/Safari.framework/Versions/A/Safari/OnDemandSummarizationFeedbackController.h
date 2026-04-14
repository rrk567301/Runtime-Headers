@interface OnDemandSummarizationFeedbackController : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_feedbackController;
    void /* unknown type, empty encoding */ currentPresentingViewController;
}

@property (class, nonatomic, readonly) OnDemandSummarizationFeedbackController *sharedController;

- (void).cxx_destruct;
- (id)init;
- (void)reportConcernWithSummaryText:(id)a0 readerTextUsedForSummarization:(id)a1 associateWithAppleAccount:(BOOL)a2 presentingViewController:(id)a3;
- (void)userDidSelectOption:(long long)a0 summaryText:(id)a1 readerTextUsedForSummarization:(id)a2 associateWithAppleAccount:(BOOL)a3 presentingViewController:(id)a4;

@end
