@class NSString, INCodableEnum;

@interface INCodableEnumAttribute : INCodableAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) INCodableEnum *codableEnum;
@property (copy, nonatomic) NSString *enumNamespace;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (Class)objectClass;
- (long long)valueType;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)valueForIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)resolutionResultClass;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
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
