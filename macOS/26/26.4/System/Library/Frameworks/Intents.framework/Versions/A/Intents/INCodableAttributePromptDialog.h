@interface INCodableAttributePromptDialog : INCodableAttributeDialog <INWidgetPlistRepresentable>

@property (nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;
+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (id)__INTypeCodableDescriptionKey;
- (void)updateWithDictionary:(id)a0;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INCodableDescriptionKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INCodableDescriptionFormatStringKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (unsigned long long)hash;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INTypeCodableDescriptionTypeKey;

@end
