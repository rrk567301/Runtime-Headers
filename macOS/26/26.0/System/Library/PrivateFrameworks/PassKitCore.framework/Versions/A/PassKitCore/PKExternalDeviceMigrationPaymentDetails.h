@class NSString;

@interface PKExternalDeviceMigrationPaymentDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *fpan;
@property (readonly, nonatomic) NSString *expiration;
@property (readonly, nonatomic) NSString *cvv;
@property (readonly, nonatomic) NSString *cardholder;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFPAN:(id)a0 expiration:(id)a1 cvv:(id)a2 cardholder:(id)a3;
- (BOOL)isEqualToExternalDeviceMigrationPaymentDetails:(id)a0;

@end
