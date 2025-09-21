@interface CTXPCSet2GUserPreferenceRequest : CTXPCRequestMessage

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithEnable:(char)a0;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
