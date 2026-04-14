@protocol GTDeviceCapabilities;

@interface GTDeviceCapabilitiesXPCDispatcher : GTXPCDispatcher <GTDeviceCapabilitiesXPCDispatcher> {
    id<GTDeviceCapabilities> _service;
}

- (void).cxx_destruct;
- (id)initWithService:(id)a0 properties:(id)a1;
- (void)daemonDeviceCapabilities:(id)a0 replyConnection:(id)a1;
- (void)deviceCompatibilityCapabilitiesWithHeapDescriptors_:(id)a0 replyConnection:(id)a1;
- (void)gpuToolsVersionQuery:(id)a0 replyConnection:(id)a1;
- (void)inferiorEnvironment_:(id)a0 replyConnection:(id)a1;

@end
