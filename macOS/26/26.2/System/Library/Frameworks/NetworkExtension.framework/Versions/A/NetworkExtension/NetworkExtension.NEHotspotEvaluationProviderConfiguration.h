@interface NetworkExtension.NEHotspotEvaluationProviderConfiguration : NetworkExtension.NEAppExtensionConfiguration <NetworkExtension.NEHotspotEvaluationProviderXPCProtocol>

- (void)startWithReply:(id /* block */)a0;
- (void)stopWithStopReason:(long long)a0 reply:(id /* block */)a1;

@end
