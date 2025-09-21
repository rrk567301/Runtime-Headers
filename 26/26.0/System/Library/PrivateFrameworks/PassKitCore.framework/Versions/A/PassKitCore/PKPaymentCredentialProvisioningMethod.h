@class NSArray;

@interface PKPaymentCredentialProvisioningMethod : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) BOOL supportsFrictionlessProvisioning;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSupportsFrictionlessProvisioning:(BOOL)a0 actions:(id)a1;

@end
