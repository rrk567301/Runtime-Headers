@class NSArray;

@interface CTXPCIsSimMatchingRequest : CTXPCSubscriptionContextRequest

@property (retain, nonatomic) NSArray *carrierDescriptors;

+ (BOOL)supportsSecureCoding;

- (id)ct_shortName;
- (void)encodeWithCoder:(id)a0;
- (int)requiredEntitlement;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 carrierDescriptors:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
