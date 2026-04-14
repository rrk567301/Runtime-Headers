@class NSNumber, NSString;

@interface INCodableNumberAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *defaultValue;
@property (retain, nonatomic) NSNumber *minimumValue;
@property (retain, nonatomic) NSNumber *maximumValue;
@property (readonly, nonatomic) BOOL supportsNegativeNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)initWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (void).cxx_destruct;
- (id)__INCodableDescriptionMaximumValueKey;
- (id)__INCodableDescriptionMinimumValueKey;
- (id)__INCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INIntentResponseCodableDescriptionMaximumValueKey;
- (id)__INIntentResponseCodableDescriptionMinimumValueKey;
- (id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INTypeCodableDescriptionMaximumValueKey;
- (id)__INTypeCodableDescriptionMinimumValueKey;
- (id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
- (id)_localizedDialogTokensWithLocalizer:(id)a0;

@end
