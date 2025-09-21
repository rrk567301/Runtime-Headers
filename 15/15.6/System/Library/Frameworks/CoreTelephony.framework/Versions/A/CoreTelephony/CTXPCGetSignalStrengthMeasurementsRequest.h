@interface CTXPCGetSignalStrengthMeasurementsRequest : CTXPCSubscriptionContextPrivateRequest

+ (id)allowedClassesForArguments;

- (id)initWithDescriptor:(id)a0 synchronous:(char)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
