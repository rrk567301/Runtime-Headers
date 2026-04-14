@class NSDecimalNumber, NSString, NSData, NSDate;

@interface PKCreditAccountIncomeDetails : NSObject <NSSecureCoding, NSCopying> {
    NSData *_encryptedData;
    NSData *_ephemeralPublicKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSDecimalNumber *yearlyIncome;
@property (copy, nonatomic) NSString *currencyCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)decryptWithPrivateKey:(struct __SecKey { } *)a0 error:(id *)a1;

@end
