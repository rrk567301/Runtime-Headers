@interface MUIManualSummaryController : NSObject {
    void /* unknown type, empty encoding */ underlying;
}

@property (class, nonatomic, readonly) char shouldAlwaysHideConversationSummarizeControl;

+ (char)allowManualSummary;
+ (char)shouldAllowSummarizationForContentLength:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMessages:(id)a0 sourceViewController:(id)a1;
- (void)provideFeedbackWithType:(long long)a0;
- (void)summarizeMessageUsingExternalIntelligence:(char)a0 completion:(id /* block */)a1;

@end
