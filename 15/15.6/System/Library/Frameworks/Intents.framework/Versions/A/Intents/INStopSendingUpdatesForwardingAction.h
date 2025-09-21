@interface INStopSendingUpdatesForwardingAction : INIntentForwardingAction

+ (Class)responseClass;

- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;
- (char)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;

@end
