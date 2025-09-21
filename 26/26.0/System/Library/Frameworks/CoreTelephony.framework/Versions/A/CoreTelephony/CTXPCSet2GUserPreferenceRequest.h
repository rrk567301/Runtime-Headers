@interface CTXPCSet2GUserPreferenceRequest : CTXPCRequestMessage

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (int)requiredEntitlement;
- (id)initWithEnable:(BOOL)a0;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
