@interface INCodableScalarAttribute : INCodableAttribute <INWidgetPlistRepresentable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;

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
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)initWithCoder:(id)a0;
- (Class)resolutionResultClass;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (long long)_attributeType;
- (Class)_relationshipValueTransformerClass;
- (id)initWithPropertyName:(id)a0 type:(long long)a1;

@end
