@class NSString, INCodableDescription;

@interface INCodableCustomObjectAttribute : INCodableObjectAttribute <INWidgetPlistRepresentable>

@property (copy, nonatomic) NSString *objectTypeName;
@property (copy, nonatomic) NSString *objectTypeNamespace;
@property (weak, nonatomic) INCodableDescription *codableDescription;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_isSupportedClass:(Class)a0;

- (void)updateWithDictionary:(id)a0;
- (Class)objectClass;
- (long long)valueType;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (Class)resolutionResultClass;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)valueTransformer;
- (id)__INCodableDescriptionObjectTypeKey;
- (id)__INCodableDescriptionObjectTypeNamespaceKey;
- (id)__INIntentResponseCodableDescriptionObjectTypeKey;
- (id)__INIntentResponseCodableDescriptionObjectTypeNamespaceKey;
- (id)__INTypeCodableDescriptionObjectTypeKey;
- (id)__INTypeCodableDescriptionObjectTypeNamespaceKey;
- (void)_assignCodableDescription;
- (long long)_attributeType;
- (Class)_relationshipValueTransformerClass;
- (Class)_unsafeObjectClass;

@end
