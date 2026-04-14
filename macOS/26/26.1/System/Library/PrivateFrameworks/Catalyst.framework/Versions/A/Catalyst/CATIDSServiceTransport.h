@class NSMutableArray, CATIDSServiceConnection;

@interface CATIDSServiceTransport : CATTransport <CATIDSServiceConnectionDelegate> {
    CATIDSServiceConnection *mConnection;
    NSMutableArray *mReceiveQueue;
    BOOL mIsActive;
    BOOL mDidDelegateInvalidation;
}

- (void)invalidateConnection;
- (void)resumeConnection;
- (void)connection:(id)a0 receivedData:(id)a1;
- (void)serviceReceiveQueue;
- (void)connectionClosed:(id)a0;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (void)tryReportingInvalidation;
- (id)operationToSendMessage:(id)a0;
- (void)suspendConnection;

@end
