@class LSApplicationRecord, NSString, NSURL;

@interface SPSearchAppEntity : SPSearchEntity

@property (readonly) LSApplicationRecord *appRecord;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSURL *appURL;
@property (readonly) NSString *appName;

+ (BOOL)supportsSecureCoding;
+ (id)metadataSpecialCasedAppEntityBundles;

- (BOOL)shouldAllowMoreResults;
- (id)queryString;
- (id)enabledDomains;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAppEntitySearch;
- (id)initWithCoder:(id)a0;
- (id)effectiveBundleIdentifier;
- (id)spotlightQueryString;
- (id)coreSpotlightFilterQueries;
- (BOOL)isScopedSearch;
- (id)metadataFilterQueries;
- (id)initWithString:(id)a0 appName:(id)a1 fromSuggestion:(BOOL)a2;
- (BOOL)isFinderAppEntity;

@end
