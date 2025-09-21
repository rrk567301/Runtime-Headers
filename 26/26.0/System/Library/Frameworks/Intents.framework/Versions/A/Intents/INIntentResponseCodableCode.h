@class INIntentResponseCodableDescription, NSString, NSArray;

@interface INIntentResponseCodableCode : NSObject <INWidgetPlistRepresentable, NSSecureCoding, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic, setter=_setCodableDescription:) INIntentResponseCodableDescription *_codableDescription;
@property (nonatomic) long long value;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isSuccess) BOOL success;
@property (copy, nonatomic) NSString *formatString;
@property (copy, nonatomic) NSString *formatStringLocID;
@property (copy, nonatomic) NSString *conciseFormatString;
@property (copy, nonatomic) NSString *conciseFormatStringLocID;
@property (readonly, nonatomic) NSArray *parameterNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INCodableDescriptionConciseFormatStringKey;
- (id)__INCodableDescriptionConciseFormatStringLanguageCodeKey;
- (id)__INCodableDescriptionConciseFormatStringDictionaryKey;
- (id)__INCodableDescriptionSuccessKey;
- (id)dictionaryRepresentation;
- (id)__INCodableDescriptionConciseFormatStringDictionaryLanguageCodeKey;
- (id)__INCodableDescriptionFormatStringLanguageCodeKey;
- (void)encodeWithCoder:(id)a0;
- (id)_parameterNamesFromString:(id)a0;
- (id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionConciseFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringIDKey;
- (id)__INCodableDescriptionFormatStringDictionaryKey;
- (id)__INCodableDescriptionNameKey;
- (void).cxx_destruct;
- (id)__INCodableDescriptionFormatStringKey;

@end
