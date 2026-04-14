@class NSArray;

@interface PKPaymentCredentialProvisioningMethod : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) BOOL supportsFrictionlessProvisioning;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSupportsFrictionlessProvisioning:(BOOL)a0 actions:(id)a1;

@end
