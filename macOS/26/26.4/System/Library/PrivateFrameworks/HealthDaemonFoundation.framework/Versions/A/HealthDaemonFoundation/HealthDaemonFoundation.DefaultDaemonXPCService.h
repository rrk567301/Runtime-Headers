@interface HealthDaemonFoundation.DefaultDaemonXPCService : NSObject <HDXPCListenerDelegate> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ requiredEntitlement;
    void /* unknown type, empty encoding */ serverGenerator;
}

- (void).cxx_destruct;
- (id)init;
- (id)exportObjectForListener:(id)a0 client:(id)a1 error:(id *)a2;

@end
