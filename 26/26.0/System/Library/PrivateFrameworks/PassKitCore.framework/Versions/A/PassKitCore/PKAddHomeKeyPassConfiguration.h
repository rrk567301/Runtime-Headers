@class NSArray;

@interface PKAddHomeKeyPassConfiguration : PKAddSecureElementPassConfiguration

@property (readonly, nonatomic) NSArray *appletTypes;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPaymentCredentialTypes:(id)a0;
- (id)initWithPaymentMethodTypes:(id)a0;

@end
