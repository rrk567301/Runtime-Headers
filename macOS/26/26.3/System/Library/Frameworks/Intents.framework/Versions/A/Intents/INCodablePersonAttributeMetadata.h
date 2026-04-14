@interface INCodablePersonAttributeMetadata : INCodableAttributeMetadata

@property (nonatomic) long long type;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)__INCodableDescriptionKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (void)encodeWithCoder:(id)a0;

@end
