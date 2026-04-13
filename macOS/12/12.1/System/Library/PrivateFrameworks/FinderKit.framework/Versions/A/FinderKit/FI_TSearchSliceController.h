@class NSString, NSSearchField, NSSet, FI_TBrowserContainerController, NSDictionary, NSStackView, FI_TSearchCriteriaViewController, FI_TSearchScopeSliceController, NSValue;

@interface FI_TSearchSliceController : FI_TViewController <NSTextFieldDelegate, TSearchScopeSliceControllerDelegate, TSearchCriteriaViewControllerDelegate, TMarkTornDown> {
    NSStackView *_slicesStackView;
    FI_TSearchScopeSliceController *_scopeSliceController;
    FI_TSearchCriteriaViewController *_criteriaController;
    NSSearchField *_toolbarSearchField;
    struct TNSWeakPtr<FI_TBrowserContainerController, void> { NSValue *fWeakObject; } _weakContainerController;
    NSSet *_searchFilterUTIs;
}

@property (weak, nonatomic) FI_TBrowserContainerController *containerController;
@property BOOL isSaveable;
@property BOOL configuring;
@property (copy) NSSet *searchFilterUTIs;
@property (readonly, nonatomic) NSString *currentScopeString;
@property (readonly, nonatomic) NSSearchField *currentSearchField;
@property (readonly, nonatomic) BOOL scopeSliceIsVisible;
@property (readonly, nonatomic) BOOL criteriaIsCollapsed;
@property (readonly, nonatomic) BOOL hasCriteria;
@property (readonly, nonatomic) NSDictionary *userSlices;
@property (readonly, nonatomic) void *queryNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isTornDown) BOOL tornDown;

+ (void)copySuggestionsFrom:(id)a0 to:(id)a1;
+ (id)searchFieldState:(id)a0;
+ (void)setSearchFieldState:(id)a0 withState:(id)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)controlTextDidChange:(id)a0;
- (void)aboutToTearDown;
- (void)initCommon;
- (void)configureView;
- (id)containerController;
- (BOOL)isBackupBrowser;
- (void)setContainerController:(id)a0;
- (void)setToolbarSearchField:(id)a0;
- (void)setSearchFilterUTIs:(id)a0;
- (void)updateUIForAction;
- (void)updateQueryFromUIAndClearContent:(BOOL)a0;
- (void)makeCriteriaController;
- (void)addCriteria;
- (void)setCriteriaTo:(id)a0;
- (BOOL)setScopeIsVisible:(BOOL)a0;
- (void)showDefaultCriteria:(BOOL)a0;
- (void)setCriteriaIsVisible:(BOOL)a0;
- (void)autoEnableScopeSaveButton;
- (void)saveQuery;
- (void)setScopePlusMinusButtonTitle:(BOOL)a0;
- (void)setScopePlusMinusButtonEnabled:(BOOL)a0;
- (void)removeAllCriteriaSlices;
- (void)updateScopePlusMinusButton;
- (void)setSearchFieldText:(id)a0;
- (void)addScopeSlice;
- (void)removeScopeSlice;
- (BOOL)criteriaIsVisible;
- (id)userCriteria:(BOOL)a0;
- (void)clearSearchField;
- (void)removeCriteria;
- (void)setSuggestionFieldScope:(long long)a0;
- (void)setDefaultFileNameOnly:(int)a0;
- (int)searchWhen;
- (id)queryStringForSearchField;
- (id)appendSearchWhen:(int)a0 toString:(id)a1;
- (void)updateQueryWithScope:(int)a0 clearContent:(BOOL)a1;
- (id)generateQueryStringForScope:(int)a0 filteredSavedSearch:(BOOL)a1;
- (BOOL)queryIsCannedSearch;
- (void)scopeChanged:(id)a0 index:(unsigned long long)a1;
- (void)fieldChanged:(id)a0 nameOnly:(BOOL)a1;
- (void)saveButtonPressed:(id)a0;
- (void)plusMinusButtonPressed:(id)a0 title:(BOOL)a1;
- (void)scopeSetByUser:(unsigned long long)a0;
- (void)criteriaSliceChange;
- (id)searchFilterUTIs;
- (void)toggleSlices;
- (BOOL)addSearchStringAndSuggestionsToCriteria;
- (void)configureForAction:(int)a0 forSearchString:(id)a1;
- (void)updateQueryWithScopeIndex:(unsigned long long)a0 clearContent:(BOOL)a1;

@end
