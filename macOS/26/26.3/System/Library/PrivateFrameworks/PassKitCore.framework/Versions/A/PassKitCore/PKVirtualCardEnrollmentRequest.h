@interface PKVirtualCardEnrollmentRequest : PKPaymentRequest

@property (readonly, nonatomic) BOOL isPeerPaymentPass;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initRefreshRequestWithPaymentPass:(id)a0;
- (id)initWithPaymentPass:(id)a0;

@end
