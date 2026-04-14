@class NSArray;

@interface _AMAddressBookItemsRowTemplateFactory : _AMRowTemplateFactory

@property (class, readonly, nonatomic) _AMAddressBookItemsRowTemplateFactory *sharedInstance;
@property (class, readonly, nonatomic) NSArray *validKeyPathsForPredicate;

- (id)rowTemplatesForAddressBookPeople;
- (id)rowTemplatesForAddressBookGroups;
- (long long)searchComparisonForComparisonPredicate:(id)a0;
- (id)_convertPersonEvaluationPredicateToSearchElement:(id)a0;
- (id)_nameSearchElementForComparisonPredicate:(id)a0;
- (id)_convertPersonUIPredicateToSearchElement:(id)a0;
- (id)_convertGroupEvaluationPredicateToSearchElement:(id)a0;
- (id)rowTemplatesForItemType:(id)a0;
- (id)convertToSearchElementFromUIPredicate:(id)a0 withItemType:(id)a1;

@end
