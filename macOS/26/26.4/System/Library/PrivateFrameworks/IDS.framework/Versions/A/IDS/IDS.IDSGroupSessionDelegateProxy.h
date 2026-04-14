@interface IDS.IDSGroupSessionDelegateProxy : NSObject <IDSGroupSessionDelegate> {
    void /* unknown type, empty encoding */ delegate;
}

- (void).cxx_destruct;
- (id)init;
- (void)groupSessionDidConnectUnderlyingLinks:(id)a0;
- (void)groupSessionDidDisconnectUnderlyingLinks:(id)a0;
- (void)groupSessionDidInitialize:(id)a0 error:(id)a1;
- (void)groupSessionDidTerminate:(id)a0;
- (void)groupSessionEnded:(id)a0 withReason:(unsigned int)a1 error:(id)a2;
- (void)session:(id)a0 didReceiveActiveParticipants:(id)a1 success:(BOOL)a2;
- (void)session:(id)a0 didReceiveBlobWithType:(unsigned int)a1 data:(id)a2 participant:(id)a3;
- (void)session:(id)a0 didReceiveData:(id)a1 dataType:(unsigned short)a2 forParticipant:(id)a3;
- (void)session:(id)a0 didReceiveDataBlob:(id)a1 forParticipant:(id)a2;
- (void)sessionDidJoinGroup:(id)a0 participantUpdate:(id)a1 error:(id)a2;
- (void)sessionDidLeaveGroup:(id)a0 error:(id)a1;

@end
