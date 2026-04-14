@class PKDisbursementRequest;

@interface PKDisbursementPaymentRequest : PKPaymentRequest

@property (readonly, nonatomic) PKDisbursementRequest *disbursementRequest;
@property (readonly, nonatomic) unsigned long long disbursementSource;
@property (readonly, nonatomic) unsigned long long disbursementTarget;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisbursementPaymentRequest:(id)a0;

@end
