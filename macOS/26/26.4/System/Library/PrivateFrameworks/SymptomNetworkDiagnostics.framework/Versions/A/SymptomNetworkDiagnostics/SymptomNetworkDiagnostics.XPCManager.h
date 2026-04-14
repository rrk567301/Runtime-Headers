@interface SymptomNetworkDiagnostics.XPCManager : NSObject <SymptomNetworkDiagnostics.SymptomNetworkDiagnosticsProtocol> {
    void /* unknown type, empty encoding */ xpcManagerDelegate;
    void /* unknown type, empty encoding */ subscriptionIsActive;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ clientInterruptionHandler;
    void /* unknown type, empty encoding */ clientInvalidationHandler;
}

- (void)didReceiveEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didReceiveMessage:(id)a0;

@end
