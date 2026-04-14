@class NSMutableArray, CATIDSServiceConnection;

@interface CATIDSServiceTransport : CATTransport <CATIDSServiceConnectionDelegate> {
    CATIDSServiceConnection *mConnection;
    NSMutableArray *mReceiveQueue;
    BOOL mIsActive;
    BOOL mDidDelegateInvalidation;
}

- (void)resumeConnection;
- (void)invalidateConnection;
- (id)name;
- (void)connectionClosed:(id)a0;
- (void)suspendConnection;
- (id)operationToSendMessage:(id)a0;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)tryReportingInvalidation;
- (void)connection:(id)a0 receivedData:(id)a1;
- (void)serviceReceiveQueue;

@end
