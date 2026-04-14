@class FI_TTaggingTokenField, NSValue, FI_TLabelView, NSImage, FI_TNotificationCenterObserverGlue, NSObject, NSLayoutConstraint, FI_TTableView;

@interface FI_TTaggingSuggestionsViewController : FI_TViewController {
    struct TNSWeakPtr<FI_TTaggingTokenField, void> { NSValue *fWeakObject; } _weakTokenField;
    BOOL _showingAll;
    BOOL _needShowAll;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _previousTypedPartOfMatchingName;
    NSImage *_topClipViewMaskImage;
    NSImage *_bottomClipViewMaskImage;
    NSImage *_topAndBottomClipViewMaskImage;
    double _lastIndexSelected;
    double _lastScrollOffset;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _tagRegistryChangedObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _generateNewTagCompletionsObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _suggestionsWillShowObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _clipViewFrameChangedObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _clipViewBoundsChangedObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _showAllIsSelectedObserver;
    NSLayoutConstraint *_maxHeightConstraint;
}

@property BOOL fadeScrolledRows;
@property (retain, nonatomic) FI_TTableView *tableView;
@property (retain, nonatomic) FI_TLabelView *labelColorView;
@property (nonatomic) BOOL showLabelColorView;
@property (weak, nonatomic) FI_TTaggingTokenField *taggingTokenField;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)dataSource;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (void)tableViewSelectionDidChange:(id)a0;
- (id)nibName;
- (id)textView;
- (id)stackView;
- (void)aboutToTearDown;
- (void)configureView;
- (id)tableViewNoLoad;
- (id)tokenizedTagsListedInField;
- (void)doCustomSelectionIfNeeded;
- (void)updateMaxHeightConstraint;
- (void)generateNewTagCompletionsForString:(const void *)a0;
- (void)tearDownClipViewMask;
- (id)suggestionsDataSource;
- (void)showAll:(id)a0;
- (BOOL)showSuggestionsForString:(const void *)a0;
- (void)insertSuggestionAndSelectUntypedPortionForString:(const void *)a0;
- (void)sendArrowKeyToTable:(unsigned short)a0;
- (long long)indexBeforeNontokenizedObject;
- (long long)indexOfNontokenizedObject;
- (void)configureClipViewMask;
- (id)sortBySidebarIndexDescriptor;
- (id)sortByNameDescriptor;
- (long long)numberOfTopTagsToSuggest;
- (id)tokenizedTagPriorToNonTokenized;
- (long long)numberOfRowsWhenShowingAll;
- (double)calcMaxHeight;
- (void)singleClickAction:(id)a0;
- (void)generateNewTagCompletions:(id)a0;
- (void)moveToPreviousOrNextSuggestion:(BOOL)a0;
- (void)labelColorChanged:(id)a0;
- (void)clipViewBoundsOrFrameChanged;

@end
