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

+ (BOOL)supportsSecureCoding;
+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (void)updateWithDictionary:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)__INIntentResponseCodableDescriptionDisableSmartDashesKey;
- (id)__INTypeCodableDescriptionDisableSmartQuotesKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueIDKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionDefaultValueIDKey;
- (id)__INCodableDescriptionDisableSmartDashesKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;
- (id)__INTypeCodableDescriptionDefaultValueIDKey;
- (id)__INIntentResponseCodableDescriptionDisableAutocorrectKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INIntentResponseCodableDescriptionCapitalizationKey;
- (id)__INCodableDescriptionMultilineKey;
- (id)__INTypeCodableDescriptionCapitalizationKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartQuotesKey;
- (id)localizedDefaultValueWithLocalizer:(id)a0;
- (id)__INCodableDescriptionDisableSmartQuotesKey;
- (void).cxx_destruct;
- (id)__INCodableDescriptionDisableAutocorrectKey;
- (id)__INCodableDescriptionCapitalizationKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionMultilineKey;
- (id)initWithCoder:(id)a0;
- (id)__INTypeCodableDescriptionMultilineKey;
- (id)__INTypeCodableDescriptionDisableSmartDashesKey;
- (id)__INTypeCodableDescriptionDisableAutocorrectKey;

@end
