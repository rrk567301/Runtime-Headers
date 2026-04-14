@class NSURL, NSArray;

@interface PKPaymentProvisioningMethodTypeInApp : PKPaymentProvisioningMethod

@property (readonly, copy, nonatomic) NSURL *appLaunchURL;
@property (readonly, copy, nonatomic) NSArray *cardTypeSupport;
@property (readonly, copy, nonatomic) NSArray *associatedStoreIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCode:(id)a0;
- (void)_decorateDescription:(id)a0;

@end
