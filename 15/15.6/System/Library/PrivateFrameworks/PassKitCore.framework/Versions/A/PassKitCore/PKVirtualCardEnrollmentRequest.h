@interface PKVirtualCardEnrollmentRequest : PKPaymentRequest

@property (readonly, nonatomic) char isPeerPaymentPass;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initRefreshRequestWithPaymentPass:(id)a0;
- (id)initWithPaymentPass:(id)a0;

@end
