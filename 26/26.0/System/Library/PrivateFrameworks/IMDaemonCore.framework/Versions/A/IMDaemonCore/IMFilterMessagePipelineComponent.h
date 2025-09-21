@class IMDMessageStore, IMDTrustKitDecisioningManager, IMFilterMessagePipelineComponentContext;

@interface IMFilterMessagePipelineComponent : IMPipelineComponent {
    IMDMessageStore *_messageStore;
    IMFilterMessagePipelineComponentContext *_filteringContext;
}

@property (retain, nonatomic) IMDTrustKitDecisioningManager *decisioningManager;

- (void).cxx_destruct;
- (id)initWithMessageStore:(id)a0 filteringContext:(id)a1;
- (id)runIndividuallyWithInput:(id)a0;

@end
