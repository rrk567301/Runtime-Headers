@interface INCodableAttributePromptDialog : INCodableAttributeDialog

@property (nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
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
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringKey;

@end
