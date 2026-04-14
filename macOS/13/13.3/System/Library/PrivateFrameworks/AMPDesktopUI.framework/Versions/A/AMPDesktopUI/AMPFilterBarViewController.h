@class NSTextField, NSView, FilterBarSearchField, AMPSortableMenuHandler, NSString, NSVisualEffectView, NSPopUpButton, NSObject, NSLayoutConstraint, NSButton;
@protocol AMPFilterableViewModel;

@interface AMPFilterBarViewController : NSViewController <NSSearchFieldDelegate> {
    BOOL _filterActuallyExpanded;
}

@property (weak, nonatomic) NSButton *backButton;
@property (weak, nonatomic) NSButton *searchBtn;
@property (weak, nonatomic) FilterBarSearchField *searchField;
@property (weak, nonatomic) NSTextField *pageTitleLabel;
@property (weak, nonatomic) NSTextField *filterResultsLabel;
@property (weak, nonatomic) NSPopUpButton *sortOptionsBtn;
@property (weak, nonatomic) NSVisualEffectView *backdropView;
@property (weak, nonatomic) NSView *customControlsContainer;
@property (weak, nonatomic) NSLayoutConstraint *searchFieldWidthConstraint;
@property (nonatomic) BOOL filterShowing;
@property (readonly, nonatomic) BOOL backdropShouldBeVisible;
@property (readonly, nonatomic) BOOL titleShouldBeVisible;
@property (readonly, nonatomic) BOOL showingSortWidget;
@property (readonly, nonatomic) BOOL shouldShowDownloadedSongsMessage;
@property (readonly, nonatomic) BOOL shouldShowCloudLoadingMessage;
@property (nonatomic) BOOL showingCustomControls;
@property (retain, nonatomic) AMPSortableMenuHandler *sortByHelper;
@property (weak, nonatomic) id previousFocus;
@property (nonatomic) BOOL filterConstraintExpanded;
@property (nonatomic) BOOL filterExpanded;
@property (nonatomic) BOOL blockAnimations;
@property (weak, nonatomic) NSObject<AMPFilterableViewModel> *filterableModel;
@property (nonatomic) BOOL backButtonVisible;
@property (nonatomic) BOOL preventBackdropVisibility;
@property (retain, nonatomic) NSView *secondaryControlView;
@property (nonatomic) BOOL showSyncLibraryWarning;
@property (nonatomic) BOOL showCloudLoadingMessage;
@property (readonly, nonatomic) BOOL filterFieldIsActive;
@property (readonly, nonatomic) BOOL filteringIsEnabled;
@property (readonly, nonatomic) BOOL filteringModeIsOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingBackdropShouldBeVisible;
+ (id)keyPathsForValuesAffectingFilteringIsEnabled;
+ (id)keyPathsForValuesAffectingFilteringModeIsOn;
+ (id)keyPathsForValuesAffectingOptionalGoBackButtonEnabled;
+ (id)keyPathsForValuesAffectingProvidedSecondaryControlView;
+ (id)keyPathsForValuesAffectingShouldShowCloudLoadingMessage;
+ (id)keyPathsForValuesAffectingShouldShowDownloadedSongsMessage;
+ (id)keyPathsForValuesAffectingShowingSortWidget;
+ (id)keyPathsForValuesAffectingTitleShouldBeVisible;

- (void)dealloc;
- (void).cxx_destruct;
- (void)willChangeValueForKey:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (void)cancelOperation:(id)a0;
- (id)currFieldWidthAnimation;
- (void)filterFieldDidEndEditing:(id)a0;
- (id)getSortableModel;
- (BOOL)optionalGoBackButtonEnabled;
- (id)propertyKeysForViewSpy;
- (id)providedSecondaryControlView;
- (id)resolvedFilterableModel;
- (void)searchBtnClicked:(id)a0;
- (void)setFilterFieldActive:(BOOL)a0;
- (void)showAllItemsAction:(id)a0;
- (BOOL)toggleFilterField;

@end
