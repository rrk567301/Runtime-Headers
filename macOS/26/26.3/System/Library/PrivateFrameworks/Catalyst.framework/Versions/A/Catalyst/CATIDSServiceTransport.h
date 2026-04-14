@class NSMutableArray, CATIDSServiceConnection;

@interface CATIDSServiceTransport : CATTransport <CATIDSServiceConnectionDelegate> {
    CATIDSServiceConnection *mConnection;
    NSMutableArray *mReceiveQueue;
    BOOL mIsActive;
    BOOL mDidDelegateInvalidation;
}

- (void)resumeConnection;
- (void)invalidateConnection;
- (void)serviceReceiveQueue;
- (void)suspendConnection;
- (id)initWithConnection:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)operationToSendMessage:(id)a0;
- (void)tryReportingInvalidation;
- (void)connectionClosed:(id)a0;
- (void)connection:(id)a0 receivedData:(id)a1;

@end
