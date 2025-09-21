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
@property char runningInAutomation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addLockdownCommandHandlersToRegistry:(id)a0;
+ (void)addStandardCommandHandlersToRegistry:(id)a0;
+ (id)commandHandlerRegistry;
+ (char)isDefaultPairedDevice:(id)a0 withAccount:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingTopLevelMessage:(id)a2 fromID:(id)a3 messageContext:(id)a4;
- (id)broadcaster;
- (char)_containsHandlesForTrustedData:(id)a0;
- (char)_shouldDropIncomingMessageOnService:(id)a0 guid:(id)a1 trustedData:(id)a2;
- (char)_shouldPassthroughIncomingMessageOnService:(id)a0 command:(long long)a1 message:(id)a2;
- (char)blockCommandForTrustedData:(id)a0;
- (id)initWithiMessageService:(id)a0 bizChatService:(id)a1 incomingMessageHandler:(id)a2 messageStore:(id)a3 chatRegistry:(id)a4 accountController:(id)a5 storageController:(id)a6 recentsController:(id)a7 attachmentStore:(id)a8;

@end
