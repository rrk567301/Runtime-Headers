@interface IMFaceTimeUtilities : NSObject

+ (BOOL)conversationIsVideoCall:(id)a0;
+ (void)joinExistingConversationForTUCoversation:(id)a0 videoEnabled:(BOOL)a1;
+ (void)initiateTUConversationForParticipants:(id)a0 senderAddress:(id)a1 videoEnabled:(BOOL)a2 groupID:(id)a3 displayName:(id)a4;
+ (void)initiateTUDialRequestForSingleParticipant:(id)a0 videoEnabled:(BOOL)a1;
+ (id)activitySessionForTUConversation:(id)a0;
+ (id)currentCallForTUConversation:(id)a0;
+ (BOOL)activeTUConversationHasActivitySession:(id)a0;
+ (void)leaveTUConversation;
+ (BOOL)isScreenShareActivityForTUConversation:(id)a0;
+ (id)remoteParticipantHandleSharingScreenForTUConversation:(id)a0;
+ (id)activityMetadataForTUConversation:(id)a0;

@end
