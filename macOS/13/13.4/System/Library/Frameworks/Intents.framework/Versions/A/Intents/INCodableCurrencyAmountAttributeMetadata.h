@class NSString, NSArray;

@interface INCodableCurrencyAmountAttributeMetadata : INCodableNumberAttributeMetadata

@property (copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSArray *currencyCodes;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionCurrencyCodeKey;
- (id)__INCodableDescriptionCurrencyCodesKey;
- (id)__INIntentResponseCodableDescriptionCurrencyCodeKey;
- (id)__INIntentResponseCodableDescriptionCurrencyCodesKey;
- (id)__INTypeCodableDescriptionCurrencyCodeKey;
- (id)__INTypeCodableDescriptionCurrencyCodesKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void)updateWithDictionary:(id)a0;

@end
