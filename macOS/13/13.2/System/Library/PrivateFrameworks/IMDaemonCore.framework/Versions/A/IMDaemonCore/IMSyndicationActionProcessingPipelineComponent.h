@class IMDiMessagePipelineResources;

@interface IMSyndicationActionProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;

- (void).cxx_destruct;
- (id)_account;
- (id)_messageStore;
- (id)_broadcaster;
- (id)runIndividuallyWithInput:(id)a0;
- (id)initWithPipelineResources:(id)a0;
- (id)_chatRegistry;
- (id)handleMessageSyndicationAction:(id)a0 chat:(id)a1;
- (id)handleChatSyndicationAction:(id)a0 chat:(id)a1;
- (id)findSMSChatForInput:(id)a0;

@end
