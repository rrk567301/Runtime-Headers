@class SFMutableResultSection, SPSearchQueryContext;

@interface SPUISSectionBuilder : NSObject

@property (weak, nonatomic) SFMutableResultSection *section;
@property (weak, nonatomic) SPSearchQueryContext *queryContext;
@property (nonatomic) unsigned long long renderState;
@property (nonatomic) BOOL isTopHitSection;

+ (id)supportedBundleIds;
+ (id)detailedRowCardSectionForCardSection:(id)a0;
+ (void)disambiguateUIIfNecessary:(id)a0;
+ (id)searchInAppButtonItemWithCommand:(id)a0;
+ (id)searchInAppButtonItemWithCommand:(id)a0 title:(id)a1;
+ (id)supportedBundleId;
+ (id)visibleTextForCardSection:(id)a0 includeDescriptions:(BOOL)a1;
+ (BOOL)supportsSection:(id)a0;

- (BOOL)hasEntities;
- (id)bundleId;
- (void).cxx_destruct;
- (id)buildSection;
- (BOOL)isContactEntitySearch;
- (id)buildButtonItem;
- (unsigned long long)buildMaxInitiallyVisibleResults;
- (long long)maxCardSections;
- (id)buildBridgedResult;
- (id)buildCardSectionWithResult:(id)a0 resultBuilder:(id)a1;
- (id)buildCardSections;
- (id)buildCardSectionsWithResult:(id)a0 resultBuilder:(id)a1;
- (id)buildCollectionCardSection;
- (id)buildCollectionStyle;
- (id)buildScopedSearchContinuationString;
- (id)buildScopedSearchContinuationURL;
- (id)buildTitle;
- (BOOL)shouldSkipSection;
- (BOOL)useHorizontallyScrollingCardSectionUI;

@end
