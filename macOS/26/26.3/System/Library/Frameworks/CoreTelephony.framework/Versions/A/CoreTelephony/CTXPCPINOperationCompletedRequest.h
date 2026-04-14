@interface CTXPCPINOperationCompletedRequest : CTXPCRequestMessage

- (int)requiredEntitlement;
- (id)ct_shortName;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
