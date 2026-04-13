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

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)localizedDefaultValueWithLocalizer:(id)a0;
- (id)__INCodableDescriptionCapitalizationKey;
- (id)__INCodableDescriptionDefaultValueIDKey;
- (id)__INCodableDescriptionDefaultValueKey;
- (id)__INCodableDescriptionDisableSmartQuotesKey;
- (id)__INCodableDescriptionDisableSmartDashesKey;
- (id)__INCodableDescriptionDisableAutocorrectKey;
- (id)__INCodableDescriptionMultilineKey;
- (id)__INTypeCodableDescriptionDefaultValueKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueIDKey;
- (id)__INTypeCodableDescriptionDefaultValueIDKey;
- (id)__INIntentResponseCodableDescriptionCapitalizationKey;
- (id)__INTypeCodableDescriptionCapitalizationKey;
- (id)__INIntentResponseCodableDescriptionMultilineKey;
- (id)__INTypeCodableDescriptionMultilineKey;
- (id)__INIntentResponseCodableDescriptionDisableAutocorrectKey;
- (id)__INTypeCodableDescriptionDisableAutocorrectKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartDashesKey;
- (id)__INTypeCodableDescriptionDisableSmartDashesKey;
- (id)__INIntentResponseCodableDescriptionDisableSmartQuotesKey;
- (id)__INTypeCodableDescriptionDisableSmartQuotesKey;
- (id)__INIntentResponseCodableDescriptionDefaultValueKey;

@end
