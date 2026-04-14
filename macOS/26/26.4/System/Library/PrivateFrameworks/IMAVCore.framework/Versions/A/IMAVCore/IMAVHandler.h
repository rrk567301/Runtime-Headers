@class NSMutableArray;

@interface IMAVHandler : NSObject {
    NSMutableArray *_pendingChats;
    NSMutableArray *_pendingLookups;
}

+ (void)ensureHandlerSetup;
+ (void)initialize;

- (void)account:(id)a0 conference:(id)a1 receivedCancelInvitationFrom:(id)a2 properties:(id)a3;
- (BOOL)_notAllowingInvitesDuringCallAndRunningConference:(id)a0 fromHandle:(id)a1 properties:(id)a2;
- (void)account:(id)a0 conference:(id)a1 peerID:(id)a2 propertiesUpdated:(id)a3;
- (void)account:(id)a0 conference:(id)a1 peerIDChangedFromID:(id)a2 toID:(id)a3;
- (void)_handleProtectedIncomingWithAccount:(id)a0 fromHandle:(id)a1 conference:(id)a2 properties:(id)a3;
- (void)pendingACRequestComplete;
- (void)_checkConferenceCapabilities:(id)a0;
- (void)account:(id)a0 conference:(id)a1 receivedInvitationFrom:(id)a2 properties:(id)a3;
- (void)property:(id)a0 changedTo:(id)a1 from:(id)a2;
- (BOOL)_notAllowingInvitesAndChatInvitesNonZero:(id)a0 fromHandle:(id)a1 properties:(id)a2;
- (void)account:(id)a0 conference:(id)a1 changedToNewConferenceID:(id)a2;
- (void)account:(id)a0 conference:(id)a1 remoteUser:(id)a2 properties:(id)a3;
- (void).cxx_destruct;
- (void)account:(id)a0 conference:(id)a1 invitationSentSuccessfully:(BOOL)a2;
- (BOOL)_isReady:(BOOL)a0 reason:(long long *)a1;
- (void)_handleInviteFailed:(id)a0 fromHandle:(id)a1 conference:(id)a2 properties:(id)a3 reason:(long long)a4;
- (void)setupComplete;
- (void)_setUpChat:(id)a0 isAudioOnly:(BOOL)a1 conference:(id)a2 properties:(id)a3 protectedType:(long long)a4 avChat:(id)a5;
- (void)account:(id)a0 conference:(id)a1 receivedResponseToInvitationFrom:(id)a2 properties:(id)a3;
- (void)account:(id)a0 relay:(id)a1 handleUpdate:(id)a2 fromPerson:(id)a3;
- (void)persistentProperty:(id)a0 changedTo:(id)a1 from:(id)a2;
- (void)_notifyOfIncomingInvitationFor:(id)a0 notifyInvitationListeners:(BOOL)a1;
- (void)vcCapabilitiesChanged:(unsigned long long)a0;
- (void)account:(id)a0 relay:(id)a1 handleCancel:(id)a2 fromPerson:(id)a3;
- (void)_handleIncomingWithAccount:(id)a0 fromHandle:(id)a1 conference:(id)a2 properties:(id)a3;
- (void)account:(id)a0 conference:(id)a1 receivedAVMessage:(unsigned int)a2 from:(id)a3 sessionID:(unsigned int)a4 userInfo:(id)a5;
- (void)account:(id)a0 relay:(id)a1 handleInitate:(id)a2 fromPerson:(id)a3;
- (void)_enqueueIMAVChatForNetworkActivation:(id)a0;
- (void)pendingVCRequestComplete;
- (void)account:(id)a0 avAction:(unsigned int)a1 withArguments:(id)a2 toAVChat:(id)a3 isVideo:(BOOL)a4;
- (void)_handleIncomingAVChatForNotification:(id)a0;
- (void)account:(id)a0 postedError:(id)a1;

@end
