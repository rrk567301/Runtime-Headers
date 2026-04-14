@interface HealthDaemonFoundation.DaemonXPCConnectionManager : NSObject <HDXPCListenerDelegate> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ lockedServiceMap;
    void /* unknown type, empty encoding */ logger;
}

- (void).cxx_destruct;
- (id)init;
- (id)exportObjectForListener:(id)a0 client:(id)a1 error:(id *)a2;
- (void)dealloc;

@end
