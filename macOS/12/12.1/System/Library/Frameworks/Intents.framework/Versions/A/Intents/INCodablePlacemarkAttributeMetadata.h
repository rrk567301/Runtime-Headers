@interface INCodablePlacemarkAttributeMetadata : INCodableAttributeMetadata

@property (nonatomic) long long type;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionTypeKey;

@end
