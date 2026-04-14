@class IMDMessageStore, IMDMessageFromStorageController, IMDiMessageIncomingMessageHandler, IMDAccountController, IDSService, IMDRecentsController, IMDAttachmentStore, IMDMessageSuppressionController, NSString, IMDChatRegistry;

@interface IMDiMessageIDSDelegate : NSObject <IDSServiceDelegatePrivate>

@property (readonly, retain) IDSService *idsService;
@property (readonly, retain) IDSService *bizChatService;
@property (readonly, retain) IMDiMessageIncomingMessageHandler *handler;
@property (readonly, retain) IMDMessageStore *messageStore;
@property (readonly, retain) IMDAccountController *accountController;
@property (readonly, retain) IMDMessageFromStorageController *messageFromStorageController;
@property (readonly, retain) IMDChatRegistry *chatRegistry;
@property (readonly, retain) IMDMessageSuppressionController *messageSuppressionController;
@property (readonly, retain) IMDRecentsController *recentsController;
@property (readonly, retain) IMDAttachmentStore *attachmentStore;
@property BOOL runningInAutomation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDefaultPairedDevice:(id)a0 withAccount:(id)a1;
+ (id)commandHandlerRegistry;
+ (void)addStandardCommandHandlersToRegistry:(id)a0;
+ (void)addLockdownCommandHandlersToRegistry:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingTopLevelMessage:(id)a2 fromID:(id)a3 messageContext:(id)a4;
- (id)broadcaster;
- (id)initWithiMessageService:(id)a0 bizChatService:(id)a1 incomingMessageHandler:(id)a2 messageStore:(id)a3 chatRegistry:(id)a4 accountController:(id)a5 messageSuppressionController:(id)a6 storageController:(id)a7 recentsController:(id)a8 attachmentStore:(id)a9;

@end
