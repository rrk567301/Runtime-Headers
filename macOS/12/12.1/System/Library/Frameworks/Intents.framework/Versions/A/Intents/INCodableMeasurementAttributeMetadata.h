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

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionDefaultUnitKey;
- (id)__INCodableDescriptionUnitKey;
- (id)__INIntentResponseCodableDescriptionUnitKey;
- (id)__INTypeCodableDescriptionUnitKey;
- (id)__INIntentResponseCodableDescriptionDefaultUnitKey;
- (id)__INTypeCodableDescriptionDefaultUnitKey;
- (Class)_unitClass;
- (id)_unitWithUnitName:(id)a0;
- (id)_defaultUnitWithNames:(id)a0;
- (id)__INCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INIntentResponseCodableDescriptionSupportsNegativeNumbersKey;
- (id)__INTypeCodableDescriptionSupportsNegativeNumbersKey;

@end
