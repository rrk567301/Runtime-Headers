@class PKLocation, NSString, NSDate, NSArray, PKCurrencyAmount, NSPersonNameComponents, NSTimeZone, PKEventDateInfo, NSNumber;

@interface PKPassSemantic : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *semanticKey;
@property (copy, nonatomic) NSString *fieldKey;
@property (copy, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSDate *dateValue;
@property (retain, nonatomic) NSTimeZone *timeZoneValue;
@property (retain, nonatomic) PKEventDateInfo *eventDateInfoValue;
@property (retain, nonatomic) NSNumber *numberValue;
@property (retain, nonatomic) PKLocation *locationValue;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmountValue;
@property (retain, nonatomic) NSPersonNameComponents *personNameComponentsValue;
@property (retain, nonatomic) NSArray *stringsValue;
@property (retain, nonatomic) NSArray *dictionariesValue;
@property (readonly, nonatomic) char hasValue;

+ (char)isSupportedDictionaryValueType:(id)a0;
+ (id)_supportedDictionaryValueTypes;
+ (char)isSupportedDictionaryKeyType:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
