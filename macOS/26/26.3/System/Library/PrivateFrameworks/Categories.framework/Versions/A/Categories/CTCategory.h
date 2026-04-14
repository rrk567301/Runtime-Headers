@class NSString, NSArray, CKContextClient;

@interface CTCategory : NSObject <NSSecureCoding>

@property (class, readonly) CKContextClient *client;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSArray *webDomains;
@property (copy, nonatomic) NSString *primaryWebDomain;
@property (copy, nonatomic) NSString *canonicalBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSArray *equivalentBundleIdentifiers;

+ (id)_getAssociatedDomainsForHostNames:(id)a0;
+ (void)categoryForBundleID:(id)a0 platform:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (id)_appBundleIdentifierStringFor:(id)a0 categoryIdentifier:(id)a1;
+ (id)primaryLocalizedNameForIdentifier:(id)a0;
+ (id)systemCategoryIDWithPatternMatching:(id)a0;
+ (void)categoryForDomainNames:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_DHToAppStoreCategoriesMap;
+ (void)categoryForBundleID:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_equivalentBundleIDsMappingForWatchOSBundleID:(id)a0;
+ (id)equivalentIdentifiersForBundleID:(id)a0;
+ (id)schemeStringForPlatform:(id)a0;
+ (id)_urlComponentsForHostName:(id)a0;
+ (id)_bundleIdentifierForContextResponse:(id)a0;
+ (void)categoryForDomainURL:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_urlStringsForHostNames:(id)a0;
+ (void)_lookupAppStoreUsing:(id)a0 platform:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (id)_equivalentBundleIDsWithSchemesRemovedMapping;
+ (id)_overrideEquivalentIdentifiers:(id)a0 forBundleID:(id)a1;
+ (id)shortLocalizedNameForIdentifier:(id)a0;
+ (id)_xpcConnection;
+ (void)categoryForDomainURLs:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)categoryForBundleIdentifiers:(id)a0 platform:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (id)systemAppCategoryIdentifierForBundleIdentifier:(id)a0;
+ (void)_getCategoryTypeForDomainName:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_relatedItemsForContextResponse:(id)a0;
+ (id)_getEquivalentBundleIdentifiers:(id)a0;
+ (id)bundleIDForPlatform:(id)a0 fromBundleID:(id)a1 platform:(id)a2;
+ (id)localizedNameForIdentifier:(id)a0;
+ (id)parentAppBundleIdentifierForAppRecord:(id)a0;
+ (void)categoryForDomainName:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_newXpcConnection;
+ (id)itemWith:(id)a0 platform:(id)a1 array:(id)a2;
+ (id)_equivalentBundleIDsMapping;
+ (id)_DHIDtoCategoryDisplayNameMap;
+ (id)_identifierForContextResponse:(id)a0;

- (id)initWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3 primaryWebDomain:(id)a4;
- (id)description;
- (BOOL)isEqualToCategory:(id)a0;
- (id)initWithIdentifier:(id)a0 webDomains:(id)a1 bundleIdentifier:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 webDomains:(id)a1 bundleIdentifier:(id)a2 primaryWebDomain:(id)a3;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)equivalentBundleIdentifers;
- (id)initWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (void)_ctCategoryCommonInitWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3 primaryWebDomain:(id)a4 canonicalBundleIdentifier:(id)a5;
- (id)initWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3 primaryWebDomain:(id)a4 canonicalBundleIdentifier:(id)a5;
- (BOOL)isSystemBundleIdentifier;

@end
