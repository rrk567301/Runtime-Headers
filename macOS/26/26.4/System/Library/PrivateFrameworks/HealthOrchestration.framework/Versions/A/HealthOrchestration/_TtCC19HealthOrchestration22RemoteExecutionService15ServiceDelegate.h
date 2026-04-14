@interface _TtCC19HealthOrchestration22RemoteExecutionService15ServiceDelegate : NSObject <NSXPCListenerDelegate, HealthOrchestration.RemoteExecutionInterface> {
    void /* unknown type, empty encoding */ engine;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)remote_runWithWorkPlan:(id)a0 provider:(id)a1 executor:(id)a2 with:(id /* block */)a3;

@end
