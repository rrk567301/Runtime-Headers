@class NSString, NSSet, NSArray;

@interface NSFileProviderSearchQuery : NSObject <NSCopying, NSSecureCoding> {
    char _shouldPerformServerSearch;
    char _shouldPerformThirdPartyServerSearch;
    char _shouldPerformSemanticSearch;
    char _avoidCoreSpotlightSearch;
    NSString *_scopeFragment;
    NSString *_userQueryString;
    NSString *_scopedToItemIdentifierBundleId;
    NSString *_keyboardLanguage;
    NSString *_alternateScopeToItemIdentifier;
    NSString *_providerDomainID;
    NSSet *_cachedExtensions;
    NSSet *_allowedUTTypes;
    NSString *_spotlightQueryString;
    unsigned long long _trashedItemsMembership;
    NSString *_bundleIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSSet *allowedContentTypes;
@property (copy, nonatomic) NSString *userQueryString;
@property (readonly, copy, nonatomic) NSSet *allowedPathExtensions;
@property (copy, nonatomic) NSString *spotlightQueryString;
@property (copy, nonatomic) NSString *keyboardLanguage;
@property (copy, nonatomic) NSString *alternateScopeToItemIdentifier;
@property (nonatomic) char shouldPerformServerSearch;
@property (nonatomic) char shouldPerformThirdPartyServerSearch;
@property (nonatomic) char avoidCoreSpotlightSearch;
@property (nonatomic) char shouldPerformSemanticSearch;
@property (copy, nonatomic) NSString *searchContainerItemIdentifier;
@property (nonatomic) unsigned long long trashedItemsMembership;
@property (nonatomic) char includesTrashedItems;
@property (copy, nonatomic) NSString *scopeFragment;
@property (copy, nonatomic) NSString *providerDomainID;
@property (readonly, copy) NSArray *csQueryScopes;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSSet *allowedContentTypes;
@property (readonly, copy, nonatomic) NSSet *allowedPathExtensions;
@property (readonly, copy, nonatomic) NSString *scopedToItemIdentifier;
@property (readonly, copy, nonatomic) NSString *searchContainerItemIdentifier;

+ (id)newSearchContainerItemIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)predicate;
- (void)setAllowedContentTypes:(id)a0;
- (id)allowedContentTypesPredicate;
- (id)filenamePredicate;
- (id)initWithSearchScope:(id)a0;
- (id)initWithSearchScopedToItemID:(id)a0;
- (id)initWithSearchScopedToItemID:(id)a0 alternateItemID:(id)a1;
- (id)initWithSearchScopedToItemIdentifier:(id)a0 alternateItemIdentifier:(id)a1 providerDomainID:(id)a2 searchContainerItemIdentifier:(id)a3;
- (id)initWithSpotlightQueryString:(id)a0 searchScope:(id)a1 searchContainerItemIdentifier:(id)a2;
- (char)isEqualToFileProviderSearchQuery:(id)a0;
- (id)toSpotlightQueryString;
- (id)toSpotlightServerQueryString;

@end
