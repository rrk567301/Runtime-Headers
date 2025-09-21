@class NSString, NSArray, INCodableAttribute, NSNumber;

@interface INIntentCodableDescription : INRootCodableDescription <INWidgetPlistRepresentable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setInputAttributeName:) NSString *_inputAttributeName;
@property (copy, nonatomic, setter=_setKeyAttributeName:) NSString *_keyAttributeName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleLocID;
@property (copy, nonatomic) NSString *descriptiveText;
@property (copy, nonatomic) NSString *descriptiveTextLocID;
@property (copy, nonatomic) NSString *defaultImageName;
@property (nonatomic) long long intentCategory;
@property (copy, nonatomic) NSString *verb;
@property (nonatomic) BOOL userConfirmationRequired;
@property (nonatomic, getter=isForeground) BOOL foreground;
@property (nonatomic, getter=isDeprecated) BOOL deprecated;
@property (nonatomic, getter=isConfigurable) BOOL configurable;
@property (nonatomic, getter=isEligibleForSuggestions) BOOL eligibleForSuggestions;
@property (nonatomic, getter=isEligibleForWidgets) BOOL eligibleForWidgets;
@property (readonly, nonatomic) INCodableAttribute *inputAttribute;
@property (readonly, nonatomic) INCodableAttribute *keyAttribute;
@property (retain, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSNumber *versioningHash;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, copy) NSString *localizedDescriptiveText;
@property (copy, nonatomic) NSArray *entityVerbs;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (id)__ParametersKey;
+ (id)__NameKey;
+ (id)__NameKey;
+ (id)__ParameterKey;
+ (id)__Key;
+ (id)__ClassPrefixKey;
+ (id)__ClassNameKey;
+ (id)__ForegroundKey;
+ (id)_intentClassNameWithDictionary:(id)a0;
+ (id)__DeprecatedKey;
+ (id)__CategoryKey;
+ (id)__ConfigurableKey;
+ (id)__DefaultImageNameKey;
+ (id)__DescriptionIDKey;
+ (id)__DescriptionKey;
+ (id)__EligibleForWidgetsKey;
+ (id)__EntityKey;
+ (id)__HashKey;
+ (id)__IneligibleForSuggestionsKey;
+ (id)__InputKey;
+ (id)__KeyParameterKey;
+ (id)__PhrasesKey;
+ (id)__SummaryKey;
+ (id)__TitleIDKey;
+ (id)__TitleKey;
+ (id)__UserConfirmationRequiredKey;
+ (id)__VerbAssociationsKey;
+ (id)__VerbKey;

- (void)updateWithDictionary:(id)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_attributeKey;
- (void)encodeWithCoder:(id)a0;
- (id)_ignoredAttributeTags;
- (long long)codableDescriptionType;
- (id)_attributesKey;
- (id)initWithCoder:(id)a0;
- (id)attributes;
- (void).cxx_destruct;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)a0 intentResponseCodableDescription:(id)a1;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)a0 intentResponseCodableDescription:(id)a1;
- (void)_updateWithIntentCodableDescription:(id)a0;
- (id)localizedDescriptiveTextWithLocalizer:(id)a0;
- (id)localizedTitleWithLocalizer:(id)a0;
- (id)resolvableParameterCombinationsWithParameterCombinations:(id)a0;

@end
