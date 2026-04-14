@class IMDMessageStore, IMDMessageSuppressionController, IMDChatRegistry, IMDRecentsController, IDSService;

@interface IMMarkUnreadRequestProcessingPipelineComponent : IMPipelineComponent {
    IMDMessageStore *_messageStore;
    IMDChatRegistry *_chatRegistry;
    IMDMessageSuppressionController *_messageSuppressionController;
    IMDRecentsController *_recents;
    IDSService *_service;
}

- (void).cxx_destruct;
- (id)runIndividuallyWithInput:(id)a0;
- (id)initWithMessageStore:(id)a0 chatRegistry:(id)a1 messageSuppressionController:(id)a2 recents:(id)a3 IDSService:(id)a4;

@end
