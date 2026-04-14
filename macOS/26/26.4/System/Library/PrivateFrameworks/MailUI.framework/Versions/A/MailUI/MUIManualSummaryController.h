@interface MUIManualSummaryController : NSObject {
    void /* unknown type, empty encoding */ underlying;
    void /* unknown type, empty encoding */ messages;
    void /* unknown type, empty encoding */ isInlineSummary;
    void /* unknown type, empty encoding */ donationManager;
}

@property (class, nonatomic, readonly) BOOL shouldAlwaysHideConversationSummarizeControl;

+ (BOOL)shouldAllowSummarizationForContentLength:(long long)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMessages:(id)a0 sourceViewController:(id)a1 isInlineSummary:(BOOL)a2 donationManager:(id)a3;
- (void)provideFeedbackWithType:(long long)a0;
- (void)summarizeMessageUsingExternalIntelligence:(BOOL)a0 completion:(id /* block */)a1;

@end
