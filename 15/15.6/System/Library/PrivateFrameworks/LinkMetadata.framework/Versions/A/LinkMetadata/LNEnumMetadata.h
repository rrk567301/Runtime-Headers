@class NSString, NSArray, NSOrderedSet, LNStaticDeferredLocalizedString, NSDictionary, LNVisibilityMetadata, LNTypeDisplayRepresentation, NSNumber;

@interface LNEnumMetadata : NSObject <NSSecureCoding, NSCopying, LNEffectiveBundleIdentifierGrouping, LNVisibilityQuery>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *displayTypeName;
@property (readonly, copy, nonatomic) LNVisibilityMetadata *visibilityMetadata;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) LNTypeDisplayRepresentation *displayRepresentation;
@property (readonly, copy, nonatomic) NSArray *cases;
@property (readonly, copy, nonatomic) NSString *customIntentEnumTypeName;
@property (readonly, copy, nonatomic) NSString *mangledTypeName;
@property (readonly, copy, nonatomic) NSDictionary *mangledTypeNameByBundleIdentifier;
@property (readonly, copy, nonatomic) NSOrderedSet *effectiveBundleIdentifiers;
@property (readonly, copy, nonatomic) NSDictionary *availabilityAnnotations;
@property (readonly, nonatomic, getter=isSystem) NSNumber *system;
@property (readonly, copy, nonatomic) NSString *fullyQualifiedTypeName;
@property (readonly, copy, nonatomic) NSArray *assistantDefinedSchemas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)ln_enumIdentifierIsSystem:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 mangledTypeNameByBundleIdentifier:(id)a2 effectiveBundleIdentifiers:(id)a3 displayRepresentation:(id)a4 cases:(id)a5 customIntentEnumTypeName:(id)a6 availabilityAnnotations:(id)a7 system:(id)a8 fullyQualifiedTypeName:(id)a9 assistantDefinedSchemas:(id)a10 visibilityMetadata:(id)a11;
- (id)mangledTypeNameForBundleIdentifier:(id)a0;
- (id)copyWithDescriptiveMetadataFromEnum:(id)a0 usingLibraryKey:(id)a1;
- (id)initWithIdentifier:(id)a0 cases:(id)a1;
- (id)initWithIdentifier:(id)a0 displayTypeName:(id)a1 cases:(id)a2;
- (id)initWithIdentifier:(id)a0 displayTypeName:(id)a1 cases:(id)a2 customIntentEnumTypeName:(id)a3;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 mangledTypeNameByBundleIdentifier:(id)a2 effectiveBundleIdentifiers:(id)a3 displayRepresentation:(id)a4 cases:(id)a5 customIntentEnumTypeName:(id)a6;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 mangledTypeNameByBundleIdentifier:(id)a2 effectiveBundleIdentifiers:(id)a3 displayRepresentation:(id)a4 cases:(id)a5 customIntentEnumTypeName:(id)a6 availabilityAnnotations:(id)a7;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 mangledTypeNameByBundleIdentifier:(id)a2 effectiveBundleIdentifiers:(id)a3 displayRepresentation:(id)a4 cases:(id)a5 customIntentEnumTypeName:(id)a6 availabilityAnnotations:(id)a7 system:(id)a8;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 mangledTypeNameByBundleIdentifier:(id)a2 effectiveBundleIdentifiers:(id)a3 displayRepresentation:(id)a4 cases:(id)a5 customIntentEnumTypeName:(id)a6 availabilityAnnotations:(id)a7 system:(id)a8 fullyQualifiedTypeName:(id)a9;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 mangledTypeNameByBundleIdentifier:(id)a2 effectiveBundleIdentifiers:(id)a3 displayRepresentation:(id)a4 cases:(id)a5 customIntentEnumTypeName:(id)a6 availabilityAnnotations:(id)a7 system:(id)a8 fullyQualifiedTypeName:(id)a9 assistantDefinedSchemas:(id)a10;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 mangledTypeNameByBundleIdentifier:(id)a2 effectiveBundleIdentifiers:(id)a3 displayTypeName:(id)a4 cases:(id)a5 customIntentEnumTypeName:(id)a6;
- (id)metadataByAddingEffectiveBundleIdentifiers:(id)a0 mangledTypeNameByBundleIdentifier:(id)a1;
- (char)visibleForUse:(long long)a0;

@end
