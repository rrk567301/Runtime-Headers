@interface CTXPCConvertISOToMCCMNCRequest : CTXPCRequestMessage

- (id)iso;
- (id)ct_shortName;
- (int)requiredEntitlement;
- (id)initWithIso:(id)a0;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
