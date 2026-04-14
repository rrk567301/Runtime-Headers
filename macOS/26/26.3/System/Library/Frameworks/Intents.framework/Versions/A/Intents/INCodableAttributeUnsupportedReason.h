@class NSString;

@interface INCodableAttributeUnsupportedReason : INCodableAttributeDialog <INWidgetPlistRepresentable>

@property (copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *predicateFormat;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)__INIntentResponseCodableDescriptionKey;
- (id)__INTypeCodableDescriptionKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionKey;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)__INIntentResponseCodableDescriptionCodeKey;
- (id)__INCodableDescriptionFormatStringKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)__INCodableDescriptionCodeKey;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionCodeKey;

@end
