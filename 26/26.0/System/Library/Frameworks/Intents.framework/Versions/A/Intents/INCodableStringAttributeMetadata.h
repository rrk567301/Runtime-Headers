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

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INIntentResponseCodableDescriptionCapitalizationKey;
- (id)__INCodableDescriptionMultilineKey;
- (id)__INTypeCodableDescriptionDisableAutocorrectKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDisableSmartDashesKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (void)encodeWithCoder:(id)a0;
- (id)__INIntentResponseCodableDescriptionDisableAutocorrectKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueIDKey;
- (id)__INTypeCodableDescriptionDisableSmartQuotesKey;
- (id)localizedDefaultValueWithLocalizer:(id)a0;
- (id)__INCodableDescriptionCapitalizationKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionMultilineKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionMultilineKey;
- (id)__INCodableDescriptionDisableSmartDashesKey;
- (id)__INCodableDescriptionDefaultValueIDKey;
- (id)initWithCoder:(id)a0;
- (id)__INIntentResponseCodableDescriptionDisableSmartDashesKey;
- (id)__INCodableDescriptionDisableSmartQuotesKey;
- (id)__INTypeCodableDescriptionCapitalizationKey;
- (id)__INCodableDescriptionDisableAutocorrectKey;
- (id)__INTypeCodableDescriptionDefaultValueIDKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartQuotesKey;
- (void).cxx_destruct;

@end
