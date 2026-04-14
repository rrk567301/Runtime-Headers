@class SFMutableResultSection, SPSearchQueryContext;

@interface SSSectionBuilder : NSObject

@property (weak, nonatomic) SFMutableResultSection *section;
@property (weak, nonatomic) SPSearchQueryContext *queryContext;
@property (nonatomic) unsigned long long renderState;

+ (id)supportedBundleId;
+ (id)supportedBundleIds;
+ (BOOL)supportsSection:(id)a0;
+ (id)searchInAppButtonItemWithCommand:(id)a0;
+ (id)searchInAppButtonItemWithCommand:(id)a0 title:(id)a1;
+ (id)detailedRowCardSectionForCardSection:(id)a0;
+ (id)visibleTextForCardSection:(id)a0 includeDescriptions:(BOOL)a1;
+ (void)disambiguateUIIfNecessary:(id)a0;

- (void).cxx_destruct;
- (id)bundleId;
- (BOOL)isContactEntitySearch;
- (BOOL)hasEntities;
- (id)buildSection;
- (id)buildBridgedResult;
- (id)buildCardSections;
- (long long)maxCardSections;
- (id)buildCollectionStyle;
- (id)buildCardSectionWithResult:(id)a0 resultBuilder:(id)a1;
- (BOOL)shouldSkipSection;
- (id)buildTitle;
- (id)buildButtonItem;
- (BOOL)useHorizontallyScrollingCardSectionUI;
- (id)buildCollectionCardSection;
- (id)buildSearchContinuationString;
- (id)buildScopedSearchContinuationString;
- (id)buildScopedSearchContinuationURL;

@end
