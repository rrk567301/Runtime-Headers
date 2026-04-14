@class NSArray, NSDictionary, NSString, INCodableAttribute, INCodableDescription;

@interface INCodableAttributeRelationship : NSObject <INWidgetPlistRepresentable, NSSecureCoding, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=_setOriginalDictionary:) NSDictionary *_originalDictionary;
@property (weak, nonatomic) INCodableAttribute *codableAttribute;
@property (readonly, weak, nonatomic) INCodableDescription *_codableDescription;
@property (weak, nonatomic) INCodableAttribute *parentCodableAttribute;
@property (nonatomic) unsigned long long relation;
@property (retain, nonatomic) NSArray *values;
@property (readonly, nonatomic) Class valueClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (id)__INTypeCodableDescriptionPredicateValuesKey;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INIntentResponseCodableDescriptionPredicateValueKey;
- (id)initWithCoder:(id)a0;
- (id)__INIntentResponseCodableDescriptionParentNameKey;
- (id)initWithCodableAttribute:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionPredicateValueKey;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)__INCodableDescriptionPredicateNameKey;
- (void).cxx_destruct;
- (void)_establishRelationship;
- (id)__INIntentResponseCodableDescriptionPredicateNameKey;
- (id)__INTypeCodableDescriptionPredicateNameKey;
- (id)__INCodableDescriptionParentNameKey;
- (id)__INCodableDescriptionPredicateValueKey;
- (id)__INCodableDescriptionPredicateValuesKey;
- (id)__INIntentResponseCodableDescriptionPredicateValuesKey;
- (id)dictionaryRepresentation;
- (id)__INTypeCodableDescriptionParentNameKey;
- (BOOL)compareValue:(id)a0;

@end
