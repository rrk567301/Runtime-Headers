@class NSMutableArray, CATIDSServiceConnection;

@interface CATIDSServiceTransport : CATTransport <CATIDSServiceConnectionDelegate> {
    CATIDSServiceConnection *mConnection;
    NSMutableArray *mReceiveQueue;
    BOOL mIsActive;
    BOOL mDidDelegateInvalidation;
}

- (void)invalidateConnection;
- (void)tryReportingInvalidation;
- (void)serviceReceiveQueue;
- (id)operationToSendMessage:(id)a0;
- (void)connection:(id)a0 receivedData:(id)a1;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (void)suspendConnection;
- (void)connectionClosed:(id)a0;
- (void)resumeConnection;

@end
