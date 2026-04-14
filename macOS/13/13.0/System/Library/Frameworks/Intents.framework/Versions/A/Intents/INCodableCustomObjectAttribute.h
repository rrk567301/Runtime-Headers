@class NSString, INCodableDescription;

@interface INCodableCustomObjectAttribute : INCodableObjectAttribute

@property (copy, nonatomic) NSString *objectTypeName;
@property (copy, nonatomic) NSString *objectTypeNamespace;
@property (weak, nonatomic) INCodableDescription *codableDescription;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)valueTransformer;
- (Class)objectClass;
- (long long)valueType;
- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (Class)resolutionResultClass;
- (Class)_relationshipValueTransformerClass;
- (Class)_unsafeObjectClass;
- (id)__INCodableDescriptionObjectTypeKey;
- (id)__INIntentResponseCodableDescriptionObjectTypeKey;
- (id)__INTypeCodableDescriptionObjectTypeKey;
- (id)__INCodableDescriptionObjectTypeNamespaceKey;
- (id)__INIntentResponseCodableDescriptionObjectTypeNamespaceKey;
- (id)__INTypeCodableDescriptionObjectTypeNamespaceKey;

@end
