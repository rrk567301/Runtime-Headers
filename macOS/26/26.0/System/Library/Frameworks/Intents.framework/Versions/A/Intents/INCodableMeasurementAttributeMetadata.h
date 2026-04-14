@class NSOrderedSet, NSUnit, NSString;

@interface INCodableMeasurementAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (retain, nonatomic) NSUnit *unit;
@property (retain, nonatomic) NSOrderedSet *defaultUnits;
@property (nonatomic) double defaultValue;
@property (nonatomic) BOOL supportsNegativeNumbers;
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
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)__INCodableDescriptionDefaultUnitKey;
- (id)__INCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INCodableDescriptionUnitKey;
- (id)__INIntentResponseCodableDescriptionDefaultUnitKey;
- (id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INIntentResponseCodableDescriptionUnitKey;
- (id)__INTypeCodableDescriptionDefaultUnitKey;
- (id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INTypeCodableDescriptionUnitKey;
- (id)_defaultUnitWithNames:(id)a0;
- (Class)_unitClass;
- (id)_unitWithUnitName:(id)a0;

@end
