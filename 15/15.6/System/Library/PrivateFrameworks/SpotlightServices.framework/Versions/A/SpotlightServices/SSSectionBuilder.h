@class SFMutableResultSection, SPSearchQueryContext;

@interface SSSectionBuilder : NSObject

@property (weak, nonatomic) SFMutableResultSection *section;
@property (weak, nonatomic) SPSearchQueryContext *queryContext;
@property (nonatomic) unsigned long long renderState;
@property (nonatomic) char isTopHitSection;

+ (id)supportedBundleIds;
+ (id)detailedRowCardSectionForCardSection:(id)a0;
+ (void)disambiguateUIIfNecessary:(id)a0;
+ (id)searchInAppButtonItemWithCommand:(id)a0;
+ (id)searchInAppButtonItemWithCommand:(id)a0 title:(id)a1;
+ (id)supportedBundleId;
+ (char)supportsSection:(id)a0;
+ (id)visibleTextForCardSection:(id)a0 includeDescriptions:(char)a1;

- (void).cxx_destruct;
- (id)bundleId;
- (id)buildSection;
- (char)isContactEntitySearch;
- (char)hasEntities;
- (unsigned long long)buildMaxInitiallyVisibleResults;
- (long long)maxCardSections;
- (id)buildButtonItem;
- (id)buildBridgedResult;
- (id)buildCardSectionWithResult:(id)a0 resultBuilder:(id)a1;
- (id)buildCardSections;
- (id)buildCardSectionsWithResult:(id)a0 resultBuilder:(id)a1;
- (id)buildCollectionCardSection;
- (id)buildCollectionStyle;
- (id)buildScopedSearchContinuationString;
- (id)buildScopedSearchContinuationURL;
- (id)buildTitle;
- (char)shouldSkipSection;
- (char)useHorizontallyScrollingCardSectionUI;

@end
