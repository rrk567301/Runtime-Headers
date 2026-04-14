@interface INCodableAttributePromptDialog : INCodableAttributeDialog <INWidgetPlistRepresentable>

@property (nonatomic) unsigned long long type;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)__INCodableDescriptionKey;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)__INCodableDescriptionFormatStringKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)__INCodableDescriptionTypeKey;
- (void)encodeWithCoder:(id)a0;

@end
