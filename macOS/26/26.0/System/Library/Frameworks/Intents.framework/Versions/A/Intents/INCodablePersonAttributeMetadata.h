@interface INCodablePersonAttributeMetadata : INCodableAttributeMetadata

@property (nonatomic) long long type;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionKey;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)initWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionKey;

@end
