@class NSString;

@interface INCodableDateComponentsAttributeMetadata : INCodableAttributeMetadata

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long format;
@property (readonly, nonatomic) unsigned long long dateStyle;
@property (readonly, nonatomic) unsigned long long timeStyle;
@property (readonly, copy, nonatomic) NSString *formatString;
@property (readonly, copy, nonatomic) NSString *formatStringID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)localizedFormatString;
- (id)localizedFormatStringWithLocalizer:(id)a0;
- (id)__INCodableDescriptionTemplateIDKey;
- (id)__INCodableDescriptionTemplateKey;
- (id)__INCodableDescriptionTimeStyleKey;
- (id)__INCodableDescriptionDateStyleKey;
- (id)__INCodableDescriptionFormatKey;
- (id)__INTypeCodableDescriptionTimeStyleKey;
- (id)__INIntentResponseCodableDescriptionTemplateKey;
- (id)__INTypeCodableDescriptionTemplateKey;
- (id)__INIntentResponseCodableDescriptionTemplateIDKey;
- (id)__INTypeCodableDescriptionTemplateIDKey;
- (id)__INIntentResponseCodableDescriptionFormatKey;
- (id)__INTypeCodableDescriptionFormatKey;
- (id)__INIntentResponseCodableDescriptionDateStyleKey;
- (id)__INTypeCodableDescriptionDateStyleKey;
- (id)__INIntentResponseCodableDescriptionTimeStyleKey;

@end
