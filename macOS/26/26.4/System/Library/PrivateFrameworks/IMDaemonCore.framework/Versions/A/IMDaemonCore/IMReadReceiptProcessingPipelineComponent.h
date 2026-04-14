@class IMDMessageStore, IMDMessageFromStorageController, IMDChatRegistry, IDSMessageContext, IMDRecentsController, IDSService;

@interface IMReadReceiptProcessingPipelineComponent : IMPipelineComponent {
    IMDMessageStore *_messageStore;
    IMDChatRegistry *_chatRegistry;
    IMDRecentsController *_recents;
    IDSService *_service;
    IDSMessageContext *_messageContext;
    IMDMessageFromStorageController *_storageController;
}

- (void).cxx_destruct;
- (void)sendDeliveryReceiptIfRequested:(id)a0;
- (void)_donateReadEventForChat:(id)a0;
- (id)_markMessagesUpToGUID:(id)a0 forChat:(id)a1 messageIsFromMe:(BOOL)a2 date:(id)a3;
- (id)initWithMessageStore:(id)a0 chatRegistry:(id)a1 recents:(id)a2 IDSService:(id)a3 storageController:(id)a4 messageContext:(id)a5;
- (id)runIndividuallyWithInput:(id)a0;
- (id)trackedReceiptFromMessage:(id)a0;

@end
