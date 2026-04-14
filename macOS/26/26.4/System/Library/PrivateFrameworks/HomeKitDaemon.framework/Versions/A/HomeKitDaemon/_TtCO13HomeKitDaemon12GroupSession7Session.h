@interface _TtCO13HomeKitDaemon12GroupSession7Session : SwiftNativeNSObject <IDSGroupSessionDelegate> {
    void /* unknown type, empty encoding */ isSessionManager;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ groupID;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ channel;
    void /* unknown type, empty encoding */ localParticipantID;
    void /* unknown type, empty encoding */ allowedSessionMemberAccounts;
    void /* unknown type, empty encoding */ allowedSessionMemberDevices;
    void /* unknown type, empty encoding */ activeParticipantIDsToIDSDestinations;
    void /* unknown type, empty encoding */ service;
}

- (id)init;
- (void)groupSessionDidConnectUnderlyingLinks:(id)a0;
- (void)groupSessionDidDisconnectUnderlyingLinks:(id)a0;
- (void)groupSessionDidInitialize:(id)a0 error:(id)a1;
- (void)groupSessionDidTerminate:(id)a0;
- (void)groupSessionEnded:(id)a0 withReason:(unsigned int)a1 error:(id)a2;
- (void)session:(id)a0 didReceiveActiveParticipants:(id)a1 success:(BOOL)a2;
- (void)session:(id)a0 participantDidJoinGroupWithInfo:(id)a1;
- (void)session:(id)a0 participantDidLeaveGroupWithInfo:(id)a1;
- (void)sessionDidJoinGroup:(id)a0 participantUpdate:(id)a1 error:(id)a2;
- (void)sessionDidLeaveGroup:(id)a0 error:(id)a1;

@end
