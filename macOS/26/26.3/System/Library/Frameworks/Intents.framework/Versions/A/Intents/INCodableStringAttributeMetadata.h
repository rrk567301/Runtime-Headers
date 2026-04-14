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
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INCodableDescriptionMultilineKey;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)localizedDefaultValueWithLocalizer:(id)a0;
- (id)__INTypeCodableDescriptionDisableSmartQuotesKey;
- (id)__INTypeCodableDescriptionDisableSmartDashesKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartQuotesKey;
- (id)__INCodableDescriptionDisableSmartQuotesKey;
- (id)__INTypeCodableDescriptionDefaultValueIDKey;
- (id)__INTypeCodableDescriptionDisableAutocorrectKey;
- (void).cxx_destruct;
- (id)__INCodableDescriptionCapitalizationKey;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionDisableSmartDashesKey;
- (id)__INTypeCodableDescriptionCapitalizationKey;
- (id)__INIntentResponseCodableDescriptionDisableAutocorrectKey;
- (id)__INCodableDescriptionDisableAutocorrectKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartDashesKey;
- (id)__INCodableDescriptionDefaultValueIDKey;
- (id)__INIntentResponseCodableDescriptionCapitalizationKey;
- (id)__INIntentResponseCodableDescriptionMultilineKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionMultilineKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueIDKey;

@end
