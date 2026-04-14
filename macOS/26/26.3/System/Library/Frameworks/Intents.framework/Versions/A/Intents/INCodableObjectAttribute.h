@class NSString, NSValueTransformer;

@interface INCodableObjectAttribute : INCodableAttribute <INWidgetPlistRepresentable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setOriginalTypeName:) NSString *_originalTypeName;
@property (copy, nonatomic) NSString *typeName;
@property (readonly, nonatomic) NSValueTransformer *valueTransformer;
@property (readonly, copy, nonatomic) NSString *className;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (void)updateWithDictionary:(id)a0;
- (Class)objectClass;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (long long)valueType;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)__INCodableDescriptionKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (Class)resolutionResultClass;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setClassName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)__INCodableDescriptionTypeKey;
- (void)encodeWithCoder:(id)a0;
- (long long)_attributeType;
- (Class)_relationshipValueTransformerClass;

@end
