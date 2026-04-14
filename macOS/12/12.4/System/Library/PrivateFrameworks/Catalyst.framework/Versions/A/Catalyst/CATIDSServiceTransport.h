@class NSMutableArray, CATIDSServiceConnection;

@interface CATIDSServiceTransport : CATTransport <CATIDSServiceConnectionDelegate> {
    CATIDSServiceConnection *mConnection;
    NSMutableArray *mReceiveQueue;
    BOOL mIsActive;
    BOOL mDidDelegateInvalidation;
}

- (id)name;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)suspendConnection;
- (void)resumeConnection;
- (void)invalidateConnection;
- (void)connectionClosed:(id)a0;
- (void)connection:(id)a0 receivedData:(id)a1;
- (void)serviceReceiveQueue;
- (void)tryReportingInvalidation;
- (id)operationToSendMessage:(id)a0;

@end
