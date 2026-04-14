@class NSString, INCodableEnum;

@interface INCodableEnumAttribute : INCodableAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) INCodableEnum *codableEnum;
@property (copy, nonatomic) NSString *enumNamespace;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (void)updateWithDictionary:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (Class)objectClass;
- (Class)resolutionResultClass;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)valueType;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)valueForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)valueWithName:(id)a0;
- (id)__INCodableDescriptionEnumTypeKey;
- (id)__INCodableDescriptionEnumTypeNamespaceKey;
- (id)__INIntentResponseCodableDescriptionEnumTypeKey;
- (id)__INIntentResponseCodableDescriptionEnumTypeNamespaceKey;
- (id)__INTypeCodableDescriptionEnumTypeKey;
- (id)__INTypeCodableDescriptionEnumTypeNamespaceKey;
- (long long)_attributeType;
- (Class)_relationshipValueTransformerClass;

@end
