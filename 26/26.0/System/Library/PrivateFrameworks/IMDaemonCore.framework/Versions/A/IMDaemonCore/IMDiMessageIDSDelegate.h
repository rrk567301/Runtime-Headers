@class IMDMessageStore, IMDMessageFromStorageController, IMDiMessageIncomingMessageHandler, IMDAccountController, IMDRecentsController, IDSService, IMDAttachmentStore, NSString, IMDChatRegistry;

@interface IMDiMessageIDSDelegate : NSObject <IDSServiceDelegatePrivate>

@property (readonly, retain) IDSService *idsService;
@property (readonly, retain) IDSService *bizChatService;
@property (readonly, retain) IMDiMessageIncomingMessageHandler *handler;
@property (readonly, retain) IMDMessageStore *messageStore;
@property (readonly, retain) IMDAccountController *accountController;
@property (readonly, retain) IMDMessageFromStorageController *messageFromStorageController;
@property (readonly, retain) IMDChatRegistry *chatRegistry;
@property (readonly, retain) IMDRecentsController *recentsController;
@property (readonly, retain) IMDAttachmentStore *attachmentStore;
@property BOOL runningInAutomation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDefaultPairedDevice:(id)a0 withAccount:(id)a1;
+ (void)addStandardCommandHandlersToRegistry:(id)a0;
+ (id)commandHandlerRegistry;
+ (void)_postReceivedMessageMetricsForInput:(id)a0 withMessageContext:(id)a1 toIDSService:(id)a2;
+ (void)addLockdownCommandHandlersToRegistry:(id)a0;

- (void)service:(id)a0 account:(id)a1 incomingBatchMessage:(id)a2;
- (BOOL)_shouldDropIncomingMessageOnService:(id)a0 guid:(id)a1 trustedData:(id)a2;
- (id)makeTopLevelMessageDictionaryFrom:(id)a0 batchContext:(id)a1;
- (void)service:(id)a0 account:(id)a1 fromID:(id)a2 message:(id)a3 messageContext:(id)a4 trustedData:(id)a5 powerAssertion:(id)a6;
- (id)init;
- (id)initWithiMessageService:(id)a0 bizChatService:(id)a1 incomingMessageHandler:(id)a2 messageStore:(id)a3 chatRegistry:(id)a4 accountController:(id)a5 storageController:(id)a6 recentsController:(id)a7 attachmentStore:(id)a8;
- (BOOL)blockCommandForTrustedData:(id)a0;
- (BOOL)_containsHandlesForTrustedData:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingTopLevelMessage:(id)a2 fromID:(id)a3 messageContext:(id)a4;
- (BOOL)_shouldPassthroughIncomingMessageOnService:(id)a0 command:(long long)a1 message:(id)a2;
- (void).cxx_destruct;
- (id)broadcaster;

@end
