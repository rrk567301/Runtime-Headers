@class NSString, PKAutoReloadPaymentMethod;

@interface PKPassBalance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) PKAutoReloadPaymentMethod *paymentMethod;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
