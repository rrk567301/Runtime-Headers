@interface FaceTimeNotificationCore.ConversationChangeNotifier : NSObject <TUConversationManagerDelegate> {
    void /* unknown type, empty encoding */ activeRemoteParticipantsChangedPublisher;
}

- (void).cxx_destruct;
- (id)init;
- (void)conversationManager:(id)a0 activeRemoteParticipantsChangedForConversation:(id)a1;

@end
