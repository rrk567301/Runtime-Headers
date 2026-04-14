@interface CTXPCConvertISOToMCCMNCRequest : CTXPCRequestMessage

- (id)ct_shortName;
- (id)iso;
- (int)requiredEntitlement;
- (id)initWithIso:(id)a0;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
