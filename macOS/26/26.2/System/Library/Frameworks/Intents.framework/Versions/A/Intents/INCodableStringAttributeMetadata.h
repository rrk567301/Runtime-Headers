@class NSString;

@interface INCodableStringAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding>

@property (nonatomic, getter=isMultiline) BOOL multiline;
@property (nonatomic) BOOL disableAutocorrect;
@property (nonatomic) BOOL disableSmartDashes;
@property (nonatomic) BOOL disableSmartQuotes;
@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) NSString *defaultValueID;
@property (nonatomic) long long capitalization;
@property (readonly, copy) NSString *localizedDefaultValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)supportsSecureCoding;

- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (id)__INCodableDescriptionDisableSmartDashesKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartDashesKey;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)__INTypeCodableDescriptionDisableSmartQuotesKey;
- (id)__INTypeCodableDescriptionDisableAutocorrectKey;
- (id)initWithCoder:(id)a0;
- (id)__INIntentResponseCodableDescriptionDefaultValueIDKey;
- (id)__INTypeCodableDescriptionDefaultValueIDKey;
- (id)__INTypeCodableDescriptionMultilineKey;
- (id)__INTypeCodableDescriptionCapitalizationKey;
- (id)__INCodableDescriptionCapitalizationKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionDefaultValueIDKey;
- (id)__INCodableDescriptionDisableSmartQuotesKey;
- (void).cxx_destruct;
- (id)__INIntentResponseCodableDescriptionCapitalizationKey;
- (id)localizedDefaultValueWithLocalizer:(id)a0;
- (id)__INTypeCodableDescriptionDisableSmartDashesKey;
- (id)__INIntentResponseCodableDescriptionMultilineKey;
- (id)__INIntentResponseCodableDescriptionDisableAutocorrectKey;
- (id)__INCodableDescriptionDisableAutocorrectKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartQuotesKey;
- (id)__INCodableDescriptionMultilineKey;

@end
