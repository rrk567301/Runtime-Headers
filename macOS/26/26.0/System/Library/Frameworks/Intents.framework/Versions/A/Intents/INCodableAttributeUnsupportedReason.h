@class NSString;

@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog <INWidgetPlistRepresentable>

@property (copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *predicateFormat;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionKey;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INIntentResponseCodableDescriptionCodeKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionCodeKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionCodeKey;
- (unsigned long long)hash;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)__INCodableDescriptionFormatStringKey;
- (id)__INIntentResponseCodableDescriptionKey;

@end
