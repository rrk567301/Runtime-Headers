@interface IMDCallManager_Impl : NSObject <TUConversationManagerDelegate> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ serviceSession;
    void /* unknown type, empty encoding */ conversationManager;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ newChatListenerTask;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithServiceSession:(id)a0;
- (void)dealloc;
- (void)conversationManager:(id)a0 addedActiveConversation:(id)a1;
- (void)conversationManager:(id)a0 conversationUpdatedMessagesGroupUUID:(id)a1;

@end
