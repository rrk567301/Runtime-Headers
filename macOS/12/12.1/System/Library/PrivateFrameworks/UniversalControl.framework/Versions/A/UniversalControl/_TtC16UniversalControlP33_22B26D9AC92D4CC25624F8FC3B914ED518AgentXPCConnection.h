@interface _TtC16UniversalControlP33_22B26D9AC92D4CC25624F8FC3B914ED518AgentXPCConnection : NSObject <UniversalControl.UniversalControlXPCInterface> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ machServiceName;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ error;
}

- (id)init;
- (void).cxx_destruct;
- (void)xpcConnectTo:(id)a0 completion:(id /* block */)a1;
- (void)xpcDiagnoseWithCompletion:(id /* block */)a0;
- (void)xpcDisconnectFrom:(id)a0 completion:(id /* block */)a1;
- (void)xpcDisconnect;
- (void)xpcSynchronizeWith:(id)a0 completion:(id /* block */)a1;
- (void)xpcMoveWithType:(id)a0 device:(id)a1 completion:(id /* block */)a2;
- (void)xpcGetConfigurationWithCompletion:(id /* block */)a0;
- (void)xpcSetConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)xpcGetConnectedDevicesWithCompletion:(id /* block */)a0;
- (void)xpcGetDevicesWithCompletion:(id /* block */)a0;
- (void)xpcGetIDSWithCompletion:(id /* block */)a0;

@end
