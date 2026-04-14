@class PKAutoFillCardCredential, NSString, NSDate, PKFPANCardDescriptor;

@interface PKFPANCredential : PKPaymentCredential

@property (readonly, copy, nonatomic) NSString *cardholderName;
@property (readonly, copy, nonatomic) NSString *cardNumber;
@property (readonly, copy, nonatomic) NSString *expiration;
@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *securityCode;
@property (readonly, nonatomic) BOOL canCheckEligibility;
@property (readonly, copy, nonatomic) PKFPANCardDescriptor *descriptor;
@property (readonly, copy, nonatomic) PKAutoFillCardCredential *credential;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)longDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)expiration;
- (long long)credentialType;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;
- (id)initWithFPANCardDescriptor:(id)a0 credential:(id)a1;
- (id)initWithSafariDictionary:(id)a0;
- (id)sanitizedPrimaryAccountNumber;

@end
