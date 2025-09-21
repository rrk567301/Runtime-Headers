@class NSString, NSDictionary, NSURL, NSDate, NSData, NSArray;

@interface WBSTOTPGenerator : NSObject <NSSecureCoding> {
    NSData *_key;
    NSArray *_cachedHeuristicallyDeterminedServiceNameHints;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *issuer;
@property (readonly, copy, nonatomic) NSString *accountName;
@property (readonly, nonatomic) NSDate *initialDate;
@property (readonly, nonatomic) unsigned long long codeGenerationPeriod;
@property (readonly, nonatomic) unsigned long long algorithm;
@property (readonly, nonatomic) unsigned long long numberOfDigitsInCode;
@property (copy, nonatomic) NSURL *originalURL;
@property (readonly, copy, nonatomic) NSURL *exportableURL;
@property (readonly, copy, nonatomic) NSData *keyData;
@property (readonly, copy, nonatomic) NSArray *heuristicallyDeterminedServiceNameHints;

+ (id)_base32EncodedStringForKeyData:(id)a0;
+ (id)_keyDataForBase32EncodedString:(id)a0;
+ (char)_urlWithComponentsHasValidOtpauthURLScheme:(id)a0;
+ (id)countdownStringForMultipleCodesWithSecondsRemaining:(long long)a0;
+ (id)countdownStringForSecondsRemaining:(long long)a0;
+ (id)shortCountdownStringForSecondsRemaining:(long long)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (char)generatesIdenticalCodesToGenerator:(id)a0;
- (id)initWithBase32EncodedKey:(id)a0;
- (id)initWithOTPAuthURL:(id)a0;
- (unsigned long long)_HMACLengthForAlgorithm:(unsigned long long)a0;
- (unsigned long long)_algorithmForQueryItemValue:(id)a0;
- (unsigned int)_commonCryptoAlgorithmForTOTPAlgorithm:(unsigned long long)a0;
- (unsigned long long)_numberOfIntervalsSinceInitialDateForDate:(id)a0;
- (id)_stringForAlgorithm:(unsigned long long)a0;
- (id)codeForDate:(id)a0;
- (id)initWithASCIIEncodedKey:(id)a0 initialDate:(id)a1 codeGenerationPeriod:(unsigned long long)a2 numberOfDigits:(unsigned long long)a3 algorithm:(unsigned long long)a4;
- (id)initWithBase32EncodedKey:(id)a0 initialDate:(id)a1 codeGenerationPeriod:(unsigned long long)a2 numberOfDigits:(unsigned long long)a3 algorithm:(unsigned long long)a4;
- (id)initWithKeyData:(id)a0 initialDate:(id)a1 codeGenerationPeriod:(unsigned long long)a2 numberOfDigits:(unsigned long long)a3 algorithm:(unsigned long long)a4 issuer:(id)a5 accountName:(id)a6 originalURL:(id)a7;
- (id)initWithUserProvidedString:(id)a0;
- (id)startDateOfIntervalContainingDate:(id)a0;

@end
