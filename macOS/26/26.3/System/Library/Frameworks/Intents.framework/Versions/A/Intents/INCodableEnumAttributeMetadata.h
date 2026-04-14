@class NSString, INCodableEnumValue;

@interface INCodableEnumAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (retain, nonatomic) INCodableEnumValue *defaultValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
