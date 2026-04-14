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

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)credentialType;
- (void).cxx_destruct;
- (id)longDescription;
- (id)expiration;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;
- (id)initWithFPANCardDescriptor:(id)a0 credential:(id)a1;
- (id)initWithSafariDictionary:(id)a0;
- (id)sanitizedPrimaryAccountNumber;

@end
