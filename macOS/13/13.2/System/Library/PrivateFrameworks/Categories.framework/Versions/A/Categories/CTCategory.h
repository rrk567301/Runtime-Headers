@class NSString, NSArray;

@interface CTCategory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSArray *webDomains;
@property (copy, nonatomic) NSString *primaryWebDomain;
@property (copy, nonatomic) NSString *canonicalBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSArray *equivalentBundleIdentifiers;

+ (void)initialize;
+ (id)_xpcConnection;
+ (id)localizedNameForIdentifier:(id)a0;
+ (id)bundleIDForPlatform:(id)a0 fromBundleID:(id)a1 platform:(id)a2;
+ (id)_newXpcConnection;
+ (id)primaryLocalizedNameForIdentifier:(id)a0;
+ (id)shortLocalizedNameForIdentifier:(id)a0;
+ (void)categoryForBundleID:(id)a0 platform:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)categoryForBundleIdentifiers:(id)a0 platform:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)categoryForBundleID:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)categoryForDomainURL:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)categoryForDomainURLs:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)categoryForDomainName:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)categoryForDomainNames:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)systemAppCategoryIdentifierForBundleIdentifier:(id)a0;
+ (id)_overrideEquivalentIdentifiers:(id)a0 forBundleID:(id)a1;
+ (id)systemCategoryIDWithPatternMatching:(id)a0;
+ (void)_getCategoryTypeForDomainName:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_DHIDtoCategoryDisplayNameMap;
+ (id)schemeStringForPlatform:(id)a0;
+ (id)_DHToAppStoreCategoriesMap;
+ (void)_lookupAppStoreUsing:(id)a0 platform:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (id)_getEquivalentBundleIdentifiers:(id)a0;
+ (id)_schemeRemovedEquivalentBundleIDsMapping:(id)a0;
+ (id)equivalentIdentifiersForBundleID:(id)a0;
+ (id)itemWith:(id)a0 platform:(id)a1 array:(id)a2;
+ (id)_equivalentBundleIDsMappingForWatchOSBundleID:(id)a0;
+ (id)_equivalentBundleIDsMapping;
+ (id)_getAssociatedDomainsForHostNames:(id)a0;
+ (id)parentAppBundleIdentifierForAppRecord:(id)a0;
+ (id)_identifierForContextResponse:(id)a0;
+ (id)_bundleIdentifierForContextResponse:(id)a0;
+ (id)_relatedItemsForContextResponse:(id)a0;
+ (id)_urlStringsForHostNames:(id)a0;
+ (id)_urlComponentsForHostName:(id)a0;
+ (id)_appBundleIdentifierStringFor:(id)a0 categoryIdentifier:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToCategory:(id)a0;
- (id)initWithIdentifier:(id)a0 webDomains:(id)a1 bundleIdentifier:(id)a2;
- (id)initWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3;
- (id)initWithIdentifier:(id)a0 webDomains:(id)a1 bundleIdentifier:(id)a2 primaryWebDomain:(id)a3;
- (id)initWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3 primaryWebDomain:(id)a4;
- (id)initWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3 primaryWebDomain:(id)a4 canonicalBundleIdentifier:(id)a5;
- (void)_ctCategoryCommonInitWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3 primaryWebDomain:(id)a4 canonicalBundleIdentifier:(id)a5;
- (id)equivalentBundleIdentifers;
- (BOOL)isSystemBundleIdentifier;

@end
