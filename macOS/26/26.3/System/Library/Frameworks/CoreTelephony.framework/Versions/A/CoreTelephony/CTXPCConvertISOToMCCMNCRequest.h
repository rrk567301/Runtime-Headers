@interface CTXPCConvertISOToMCCMNCRequest : CTXPCRequestMessage

- (id)iso;
- (int)requiredEntitlement;
- (id)ct_shortName;
- (id)initWithIso:(id)a0;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
