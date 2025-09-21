@class NSString, NSArray, NSDictionary, SFCommand, SFImage, SFColor;

@interface SPSearchEntity : NSObject <NSSecureCoding> {
    NSString *_searchString;
    NSString *_displayString;
    NSString *_tokenString;
    SFCommand *_command;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *tokenText;
@property (readonly, nonatomic) NSString *searchString;
@property (readonly, nonatomic) NSString *currentSearchString;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) NSString *queryString;
@property (readonly, nonatomic) NSString *spotlightQueryString;
@property (readonly, nonatomic) NSArray *folderScopes;
@property (readonly, nonatomic) NSArray *groupingRules;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) SFImage *tokenImage;
@property (readonly, nonatomic) NSDictionary *spotlightRankCategories;
@property (readonly, nonatomic) NSDictionary *spotlightRankTerms;
@property (readonly) BOOL isScopedSearch;
@property (readonly) BOOL isPhotosEntitySearch;
@property (readonly) BOOL isContactEntitySearch;
@property (readonly) BOOL isAppEntitySearch;
@property (readonly) BOOL isNLPEntitySearch;
@property (readonly) BOOL isCommandEntitySearch;
@property (readonly) BOOL isServerEntitySearch;
@property (readonly) BOOL isFolderSearch;
@property (readonly) BOOL isFilterSearch;
@property (readonly) BOOL shouldAllowMoreResults;
@property BOOL hasWords;
@property BOOL isSuggestion;
@property (copy, nonatomic) NSArray *spotlightFilterQueries;
@property (copy, nonatomic) NSArray *coreSpotlightFilterQueries;
@property (copy, nonatomic) NSArray *metadataFilterQueries;
@property (copy, nonatomic) NSArray *enabledDomains;
@property (copy, nonatomic) NSArray *preferredBundleIDs;
@property (readonly, nonatomic) SFCommand *command;
@property (retain, nonatomic) SFColor *entityBackgroundColor;
@property (nonatomic) BOOL isActionsBrowse;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)folderScopesFromSearchEntities:(id)a0;
+ (id)filterResultsFromSearchEntities:(id)a0;
+ (id)searchEntityWithPhotosSearchString:(id)a0 fromSuggestion:(BOOL)a1;
+ (id)searchEntityWithAppString:(id)a0 appName:(id)a1 fromSuggestion:(BOOL)a2;
+ (id)searchEntityWithCommand:(id)a0 fromSuggestion:(BOOL)a1;
+ (id)searchEntityWithContactIdentifier:(id)a0 fromSuggestion:(BOOL)a1;
+ (id)searchEntityWithFilterCommand:(id)a0 fromSuggestion:(BOOL)a1;
+ (id)searchEntityWithPersonQueryIdentifier:(id)a0 personName:(id)a1 fromSuggestion:(BOOL)a2;
+ (id)searchEntityWithSearchString:(id)a0 spotlightQueryString:(id)a1 preferredBundleIDs:(id)a2;
+ (id)searchEntityWithSpotlightSuggestion:(id)a0 symbolName:(id)a1 fromSuggestion:(BOOL)a2;
+ (id)searchFolderEntityWithCommand:(id)a0 fromSuggestion:(BOOL)a1;

- (void)setDisplayString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setSearchString:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateSearchString:(id)a0;
- (void).cxx_destruct;
- (void)setTokenString:(id)a0;
- (void)appendToQuery:(id)a0 key:(id)a1 value:(id)a2 additions:(id)a3 flags:(id)a4;
- (void)appendToQuery:(id)a0 key:(id)a1 value:(id)a2 optionalValue:(id)a3 additions:(id)a4 flags:(id)a5;

@end
