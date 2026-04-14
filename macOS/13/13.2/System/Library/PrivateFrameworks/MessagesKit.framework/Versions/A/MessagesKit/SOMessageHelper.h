@interface SOMessageHelper : SOHelper

+ (id)bundleName;
+ (id)weakSharedInstance;
+ (id)remoteReceiverProtocol;
+ (void)_openURLWithAction:(id)a0 forAlias:(id)a1;
+ (void)videoChatWithAlias:(id)a0;
+ (void)audioChatWithAlias:(id)a0;
+ (void)startChatWithABPersonID:(id)a0;
+ (id)iMessageURLForAddress:(id)a0;
+ (id)iMessageURLForAddresses:(id)a0;

- (void)sendMessageText:(id)a0 toRecipients:(id)a1 onService:(id)a2 withCompletionBlock:(id /* block */)a3;
- (void)sendMessageText:(id)a0 toRecipient:(id)a1 withCompletionBlock:(id /* block */)a2;
- (id)newMessageString;
- (void)startNewConverstaionInMessages;
- (id)openMessagesString;
- (void)openShareKit;

@end
