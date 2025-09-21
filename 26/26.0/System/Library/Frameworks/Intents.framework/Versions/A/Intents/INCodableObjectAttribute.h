@class NSString, NSValueTransformer;

@interface INCodableObjectAttribute : INCodableAttribute <INWidgetPlistRepresentable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setOriginalTypeName:) NSString *_originalTypeName;
@property (copy, nonatomic) NSString *typeName;
@property (readonly, nonatomic) NSValueTransformer *valueTransformer;
@property (readonly, copy, nonatomic) NSString *className;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (Class)objectClass;
- (long long)valueType;
- (id)__INCodableDescriptionKey;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionKey;
- (void)setClassName:(id)a0;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)initWithCoder:(id)a0;
- (Class)resolutionResultClass;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (void).cxx_destruct;
- (id)__INIntentResponseCodableDescriptionKey;
- (long long)_attributeType;
- (Class)_relationshipValueTransformerClass;

@end
