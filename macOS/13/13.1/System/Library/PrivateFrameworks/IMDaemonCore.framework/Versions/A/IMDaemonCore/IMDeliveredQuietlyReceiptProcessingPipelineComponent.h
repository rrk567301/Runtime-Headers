@class IMDiMessagePipelineResources;

@interface IMDeliveredQuietlyReceiptProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;

- (void).cxx_destruct;
- (id)_account;
- (id)_idsAccount;
- (id)_messageStore;
- (id)runIndividuallyWithInput:(id)a0;
- (id)initWithPipelineResources:(id)a0;
- (void)_markMessageAsDeliveredQuietlyAndNotify:(id)a0 session:(id)a1 chat:(id)a2;

@end
