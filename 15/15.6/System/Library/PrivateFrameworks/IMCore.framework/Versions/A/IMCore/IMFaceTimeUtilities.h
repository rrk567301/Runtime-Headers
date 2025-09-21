@interface IMFaceTimeUtilities : NSObject

+ (char)activeTUConversationHasActivitySession:(id)a0;
+ (id)activityMetadataForTUConversation:(id)a0;
+ (id)activitySessionForTUConversation:(id)a0;
+ (char)conversationIsAVLessSharePlay:(id)a0;
+ (char)conversationIsVideoCall:(id)a0;
+ (id)currentCallForTUConversation:(id)a0;
+ (void)initiateTUConversationForParticipants:(id)a0 senderAddress:(id)a1 videoEnabled:(char)a2 groupID:(id)a3 displayName:(id)a4 screenShareType:(unsigned long long)a5;
+ (void)initiateTUDialRequestForSingleParticipant:(id)a0 videoEnabled:(char)a1;
+ (char)isScreenShareActivityForTUConversation:(id)a0;
+ (void)joinExistingConversationForTUCoversation:(id)a0 videoEnabled:(char)a1 wantsStagingArea:(char)a2;
+ (void)leaveTUCall:(id)a0;
+ (void)leaveTUConversation;
+ (char)platformSupportsStagingArea;
+ (id)remoteParticipantHandleSharingScreenForTUConversation:(id)a0;

@end
