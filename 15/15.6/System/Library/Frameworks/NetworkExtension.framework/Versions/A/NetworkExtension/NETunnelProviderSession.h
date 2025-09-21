@interface NETunnelProviderSession : NEVPNConnection

- (char)sendProviderMessage:(id)a0 returnError:(id *)a1 responseHandler:(id /* block */)a2;
- (char)startTunnelWithOptions:(id)a0 andReturnError:(id *)a1;
- (void)stopTunnel;

@end
