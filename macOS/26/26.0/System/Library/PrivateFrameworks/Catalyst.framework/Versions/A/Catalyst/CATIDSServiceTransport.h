@class NSMutableArray, CATIDSServiceConnection;

@interface CATIDSServiceTransport : CATTransport <CATIDSServiceConnectionDelegate> {
    CATIDSServiceConnection *mConnection;
    NSMutableArray *mReceiveQueue;
    BOOL mIsActive;
    BOOL mDidDelegateInvalidation;
}

- (void)invalidateConnection;
- (id)operationToSendMessage:(id)a0;
- (void)resumeConnection;
- (id)initWithConnection:(id)a0;
- (void)suspendConnection;
- (void)tryReportingInvalidation;
- (void)connection:(id)a0 receivedData:(id)a1;
- (void)connectionClosed:(id)a0;
- (id)name;
- (void)serviceReceiveQueue;
- (void).cxx_destruct;

@end
