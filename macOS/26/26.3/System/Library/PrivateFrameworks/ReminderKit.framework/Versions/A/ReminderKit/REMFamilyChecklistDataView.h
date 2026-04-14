@class REMStore;

@interface REMFamilyChecklistDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)fetchFamilyGroceryListEligibilityForFamilyChecklistWithLocale:(id)a0 error:(id *)a1;
- (id)fetchSharedGroceryListsWithCommonSharees:(id)a0 error:(id *)a1;

@end
