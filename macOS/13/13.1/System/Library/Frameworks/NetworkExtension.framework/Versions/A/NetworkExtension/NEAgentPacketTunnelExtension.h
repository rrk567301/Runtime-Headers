@interface NEAgentPacketTunnelExtension : NEAgentTunnelExtension {
    BOOL _isUserEthernetInterfaceCreated;
    long long _interfaceType;
}

- (void)setAppUUIDMap:(id)a0;
- (void)extension:(id)a0 didSetTunnelConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleExtensionStartedWithCompletionHandler:(id /* block */)a0;

@end
