@interface INCodableAttributePromptDialog : INCodableAttributeDialog <INWidgetPlistRepresentable>

@property (nonatomic) unsigned long long type;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionKey;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionFormatStringIDKey;
- (unsigned long long)hash;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (BOOL)isEqual:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INIntentResponseCodableDescriptionKey;

@end
