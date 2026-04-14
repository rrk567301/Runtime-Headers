@interface NetworkExtension.NEURLFilterControlProviderConfiguration : NetworkExtension.NEAppExtensionConfiguration <NetworkExtension.NEURLFilterControlProviderXPCProtocol>

- (void)startWithReply:(id /* block */)a0;
- (void)fetchPrefilterDataWithTag:(id)a0 reply:(id /* block */)a1;
- (void)stopWithStopReason:(long long)a0 reply:(id /* block */)a1;

@end
