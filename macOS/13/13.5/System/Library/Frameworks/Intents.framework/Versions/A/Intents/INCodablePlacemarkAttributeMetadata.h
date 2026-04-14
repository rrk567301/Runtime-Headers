@interface INCodablePlacemarkAttributeMetadata : INCodableAttributeMetadata

@property (nonatomic) long long type;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void)updateWithDictionary:(id)a0;

@end
