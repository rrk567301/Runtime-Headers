@class NSString, NSSearchField, NSSet, FI_TBrowserContainerController, NSDictionary, NSStackView, FI_TSearchCriteriaViewController, FI_TSearchScopeSliceController, NSValue;

@interface FI_TSearchSliceController : FI_TViewController <NSTextFieldDelegate, TSearchScopeSliceControllerDelegate, TSearchCriteriaViewControllerDelegate, TMarkTornDown> {
    NSStackView *_slicesStackView;
    FI_TSearchScopeSliceController *_scopeSliceController;
    FI_TSearchCriteriaViewController *_criteriaController;
    NSSearchField *_toolbarSearchField;
    struct TNSWeakPtr<FI_TBrowserContainerController> { NSValue *fWeakObject; } _weakContainerController;
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

+ (id)searchFieldState:(id)a0;
+ (void)setSearchFieldState:(id)a0 withState:(id)a1;
+ (void)copySuggestionsFrom:(id)a0 to:(id)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)controlTextDidChange:(id)a0;
- (void)aboutToTearDown;
- (void)initCommon;
- (void)configureView;
- (BOOL)isBackupBrowser;
- (void)scopeChanged:(id)a0 index:(unsigned long long)a1;
- (void)fieldChanged:(id)a0 nameOnly:(BOOL)a1;
- (void)saveButtonPressed:(id)a0;
- (void)plusMinusButtonPressed:(id)a0 title:(BOOL)a1;
- (void)scopeSetByUser:(unsigned long long)a0;
- (void)criteriaSliceChange;
- (void)toggleSlices;
- (void)saveQuery;
- (void)removeAllCriteriaSlices;
- (void)updateScopePlusMinusButton;
- (void)setSearchFieldText:(id)a0;
- (void)clearSearchField;
- (void)addScopeSlice;
- (void)removeScopeSlice;
- (BOOL)setScopeIsVisible:(BOOL)a0;
- (void)autoEnableScopeSaveButton;
- (void)setScopePlusMinusButtonEnabled:(BOOL)a0;
- (void)setScopePlusMinusButtonTitle:(BOOL)a0;
- (void)setToolbarSearchField:(id)a0;
- (id)userCriteria:(BOOL)a0;
- (BOOL)criteriaIsVisible;
- (void)makeCriteriaController;
- (void)addCriteria;
- (BOOL)addSearchStringAndSuggestionsToCriteria;
- (void)removeCriteria;
- (void)setCriteriaIsVisible:(BOOL)a0;
- (void)showDefaultCriteria:(BOOL)a0;
- (void)setCriteriaTo:(id)a0;
- (void)setSuggestionFieldScope:(long long)a0;
- (void)setDefaultFileNameOnly:(int)a0;
- (void)configureForAction:(int)a0 forSearchString:(id)a1;
- (BOOL)queryIsCannedSearch;
- (id)appendSearchWhen:(int)a0 toString:(id)a1;
- (int)searchWhen;
- (id)queryStringForSearchField;
- (id)generateQueryStringForScope:(unsigned int)a0 filteredSavedSearch:(BOOL)a1;
- (void)updateQueryFromUIAndClearContent:(BOOL)a0;
- (void)updateQueryWithScopeIndex:(unsigned long long)a0 clearContent:(BOOL)a1;
- (void)updateQueryWithScope:(unsigned int)a0 clearContent:(BOOL)a1;
- (void)updateUIForAction;

@end
