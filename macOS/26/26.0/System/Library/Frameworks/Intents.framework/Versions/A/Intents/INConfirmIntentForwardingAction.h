@interface INConfirmIntentForwardingAction : INIntentForwardingAction

+ (Class)responseClass;

- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;
- (id /* block */)_completionHandlerWithActionCompletionHandler:(id /* block */)a0;
- (BOOL)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;

@end
