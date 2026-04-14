@class NSNumber, NSString;

@interface INCodableTimeIntervalAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (nonatomic) long long defaultUnit;
@property (nonatomic) long long minimumUnit;
@property (nonatomic) long long maximumUnit;
@property (retain, nonatomic) NSNumber *defaultValue;
@property (retain, nonatomic) NSNumber *minimumValue;
@property (retain, nonatomic) NSNumber *maximumValue;
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
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)__INCodableDescriptionMinimumValueKey;
- (id)__INIntentResponseCodableDescriptionMinimumValueKey;
- (id)__INTypeCodableDescriptionMinimumValueKey;
- (id)__INCodableDescriptionMaximumValueKey;
- (id)__INIntentResponseCodableDescriptionMaximumValueKey;
- (id)__INTypeCodableDescriptionMaximumValueKey;
- (id)__INCodableDescriptionDefaultUnitKey;
- (id)__INIntentResponseCodableDescriptionDefaultUnitKey;
- (id)__INTypeCodableDescriptionDefaultUnitKey;
- (id)__INCodableDescriptionMinimumUnitKey;
- (id)__INIntentResponseCodableDescriptionMinimumUnitKey;
- (id)__INTypeCodableDescriptionMinimumUnitKey;
- (id)__INCodableDescriptionMaximumUnitKey;
- (id)__INIntentResponseCodableDescriptionMaximumUnitKey;
- (id)__INTypeCodableDescriptionMaximumUnitKey;
- (id)__INCodableDescriptionUnitKey;
- (id)__INIntentResponseCodableDescriptionUnitKey;
- (id)__INTypeCodableDescriptionUnitKey;

@end
