@class NSString, INCodableEnumValue;

@interface INCodableEnumAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (retain, nonatomic) INCodableEnumValue *defaultValue;
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
- (id)__INCodableDescriptionKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;

@end
