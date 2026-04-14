@class NSString;

@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog <INWidgetPlistRepresentable>

@property (copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *predicateFormat;

+ (BOOL)supportsSecureCoding;
+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (id)__INTypeCodableDescriptionKey;
- (void)updateWithDictionary:(id)a0;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INCodableDescriptionKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INTypeCodableDescriptionCodeKey;
- (id)__INCodableDescriptionFormatStringKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)__INCodableDescriptionCodeKey;
- (void).cxx_destruct;
- (id)__INIntentResponseCodableDescriptionCodeKey;
- (unsigned long long)hash;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;

@end
