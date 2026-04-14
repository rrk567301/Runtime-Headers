@interface HealthDaemonFoundation.DaemonConnectionServer : NSObject <_HKXPCExportable, HKDaemonConnectionServerInterface> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ serviceMap;
    void /* unknown type, empty encoding */ logger;
}

- (void)connectionInvalidated;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)init;
- (void)remote_fetchEndpointForServiceIdentifier:(id)a0 completion:(id /* block */)a1;

@end
