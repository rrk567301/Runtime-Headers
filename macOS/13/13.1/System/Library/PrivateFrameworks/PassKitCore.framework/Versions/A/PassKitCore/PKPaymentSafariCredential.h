@class NSString, NSDate;

@interface PKPaymentSafariCredential : PKPaymentCredential

@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *cardholderName;
@property (readonly, copy, nonatomic) NSString *cardNumber;
@property (readonly, copy, nonatomic) NSString *expiration;
@property (readonly, copy, nonatomic) NSString *securityCode;
@property (readonly, nonatomic) BOOL canCheckEligibility;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)longDescription;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescription;
- (void)setEligibilityResponse:(id)a0;
- (id)initWithSafariDictionary:(id)a0;

@end
