@interface PrivateCloudComputeDaemon.TrustedRequestXPCProxy : _TtCs12_SwiftObject <PrivateCloudCompute.TC2XPCTrustedRequestProtocol> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ logPrefix;
    void /* unknown type, empty encoding */ outgoingUserDataWriter;
    void /* unknown type, empty encoding */ incomingUserDataReader;
    void /* unknown type, empty encoding */ progressReader;
    void /* unknown type, empty encoding */ task;
    void /* unknown type, empty encoding */ jsonEncoder;
    void /* unknown type, empty encoding */ callIDs;
    void /* unknown type, empty encoding */ xpcEventsObserver;
    void /* unknown type, empty encoding */ shouldDiscardConsecutiveDiscardableSubrequests;
}

- (void)cancelWithCompletion:(id /* block */)a0;
- (void)closeWithCompletion:(id /* block */)a0;
- (void)nextWithCompletion:(id /* block */)a0;
- (void)createSubrequestWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)nextProgressWithCompletion:(id /* block */)a0;
- (void)sendWithData:(id)a0 completion:(id /* block */)a1;

@end
