@class NSString, NSArray;

@interface INCodableCurrencyAmountAttributeMetadata : INCodableNumberAttributeMetadata

@property (copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSArray *currencyCodes;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)defaultValueForIntentDefaultValueProvider;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)__INCodableDescriptionCurrencyCodeKey;
- (id)__INCodableDescriptionCurrencyCodesKey;
- (id)__INIntentResponseCodableDescriptionCurrencyCodeKey;
- (id)__INIntentResponseCodableDescriptionCurrencyCodesKey;
- (id)__INTypeCodableDescriptionCurrencyCodeKey;
- (id)__INTypeCodableDescriptionCurrencyCodesKey;

@end
