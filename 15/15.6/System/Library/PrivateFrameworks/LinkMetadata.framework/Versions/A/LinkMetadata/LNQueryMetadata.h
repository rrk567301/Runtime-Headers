@class LNActionDescriptionMetadata, NSString, LNVisibilityMetadata, NSArray, NSDictionary, NSOrderedSet;

@interface LNQueryMetadata : NSObject <NSSecureCoding, NSCopying, LNEffectiveBundleIdentifierGrouping, LNVisibilityQuery>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *queryType;
@property (readonly, copy, nonatomic) LNVisibilityMetadata *visibilityMetadata;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *fullyQualifiedIdentifier;
@property (readonly, copy, nonatomic) NSString *entityType;
@property (readonly, nonatomic) char defaultQueryForEntity;
@property (readonly, copy, nonatomic) NSArray *parameters;
@property (readonly, copy, nonatomic) NSArray *sortingOptions;
@property (readonly, copy, nonatomic) NSString *mangledTypeName;
@property (readonly, copy, nonatomic) NSDictionary *mangledTypeNameByBundleIdentifier;
@property (readonly, copy, nonatomic) NSOrderedSet *effectiveBundleIdentifiers;
@property (readonly, copy, nonatomic) NSDictionary *availabilityAnnotations;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, copy, nonatomic) LNActionDescriptionMetadata *descriptionMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mangledTypeNameForBundleIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 entityType:(id)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 parameters:(id)a5 sortingOptions:(id)a6;
- (id)initWithIdentifier:(id)a0 entityType:(id)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 parameters:(id)a5 sortingOptions:(id)a6 availabilityAnnotations:(id)a7;
- (id)initWithIdentifier:(id)a0 entityType:(id)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 parameters:(id)a5 sortingOptions:(id)a6 availabilityAnnotations:(id)a7 capabilities:(unsigned long long)a8;
- (id)initWithIdentifier:(id)a0 entityType:(id)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 parameters:(id)a5 sortingOptions:(id)a6 availabilityAnnotations:(id)a7 capabilities:(unsigned long long)a8 descriptionMetadata:(id)a9;
- (id)initWithIdentifier:(id)a0 entityType:(id)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 parameters:(id)a5 sortingOptions:(id)a6 availabilityAnnotations:(id)a7 capabilities:(unsigned long long)a8 descriptionMetadata:(id)a9 visibilityMetadata:(id)a10;
- (id)initWithIdentifier:(id)a0 entityType:(id)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 parameters:(id)a5 sortingOptions:(id)a6 availabilityAnnotations:(id)a7 capabilities:(unsigned long long)a8 descriptionMetadata:(id)a9 visibilityMetadata:(id)a10 defaultQueryForEntity:(char)a11;
- (id)initWithIdentifier:(id)a0 entityType:(id)a1 mangledTypeName:(id)a2 mangledTypeNameByBundleIdentifier:(id)a3 effectiveBundleIdentifiers:(id)a4 parameters:(id)a5 sortingOptions:(id)a6 availabilityAnnotations:(id)a7 capabilities:(unsigned long long)a8 descriptionMetadata:(id)a9 visibilityMetadata:(id)a10 defaultQueryForEntity:(char)a11 fullyQualifiedIdentifier:(id)a12;
- (id)initWithIdentifier:(id)a0 queryType:(id)a1 entityType:(id)a2 mangledTypeName:(id)a3 mangledTypeNameByBundleIdentifier:(id)a4 effectiveBundleIdentifiers:(id)a5 parameters:(id)a6 sortingOptions:(id)a7;
- (id)initWithIdentifier:(id)a0 queryType:(id)a1 entityType:(id)a2 parameters:(id)a3 sortingOptions:(id)a4;
- (id)metadataByAddingEffectiveBundleIdentifiers:(id)a0 mangledTypeNameByBundleIdentifier:(id)a1;
- (char)visibleForUse:(long long)a0;

@end
