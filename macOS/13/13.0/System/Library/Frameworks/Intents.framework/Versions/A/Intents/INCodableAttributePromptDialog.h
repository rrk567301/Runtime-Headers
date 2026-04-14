@interface INCodableAttributePromptDialog : INCodableAttributeDialog

@property (nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionKey;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;

@end
