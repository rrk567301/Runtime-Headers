@class NSArray;

@interface CTXPCIsSimMatchingRequest : CTXPCSubscriptionContextRequest

@property (retain, nonatomic) NSArray *carrierDescriptors;

+ (BOOL)supportsSecureCoding;

- (int)requiredEntitlement;
- (id)ct_shortName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDescriptor:(id)a0 carrierDescriptors:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
