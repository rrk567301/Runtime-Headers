@class REMStore;

@interface REMFamilyChecklistDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (id)initWithStore:(id)a0;
- (id)fetchFamilyGroceryListEligibilityForFamilyChecklistWithLocale:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)fetchSharedGroceryListsWithCommonSharees:(id)a0 error:(id *)a1;

@end
