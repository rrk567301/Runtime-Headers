@class NSString, NSView, NSArray, NSObject;
@protocol AMPFilterableViewModel;

@interface AMPFilterableViewModelForwarder : NSObject <AMPFilterableViewModel>

@property (nonatomic) char filteringIsEnabled;
@property (retain, nonatomic) NSObject<AMPFilterableViewModel> *forwardingTarget;
@property (copy, nonatomic) NSString *filterString;
@property (readonly, nonatomic) NSString *filterStatusString;
@property (readonly, nonatomic) char showDownloadedSongsMessage;
@property (readonly, nonatomic) char showFilterBarBackground;
@property (readonly, nonatomic) NSView *secondaryControlView;
@property (readonly, nonatomic) char goBackButtonEnabled;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *supportedFilterCategories;
@property (nonatomic) unsigned long long currentFilterCategories;
@property (readonly, copy, nonatomic) id /* block */ showAllViewOptionsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingCurrentFilterCategories;
+ (id)keyPathsForValuesAffectingCurrentSecondarySortOption;
+ (id)keyPathsForValuesAffectingCurrentSortDirection;
+ (id)keyPathsForValuesAffectingCurrentSortOption;
+ (id)keyPathsForValuesAffectingCurrentViewByOptionValue;
+ (id)keyPathsForValuesAffectingEditBarIsEditing;
+ (id)keyPathsForValuesAffectingEditBarRedoEnabled;
+ (id)keyPathsForValuesAffectingEditBarSaveEnabled;
+ (id)keyPathsForValuesAffectingEditBarUndoEnabled;
+ (id)keyPathsForValuesAffectingFilterString;
+ (id)keyPathsForValuesAffectingGoBackButtonEnabled;
+ (id)keyPathsForValuesAffectingSecondaryControlView;
+ (id)keyPathsForValuesAffectingShowAllViewOptionsBlock;
+ (id)keyPathsForValuesAffectingShowDownloadedSongsMessage;
+ (id)keyPathsForValuesAffectingShowFilterBarBackground;
+ (id)keyPathsForValuesAffectingSupportedFilterCategories;
+ (id)keyPathsForValuesAffectingSupportedSortOptions;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)init;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)getViewByTarget;
- (long long)currentSecondarySortOption;
- (int)currentSortDirection;
- (long long)currentSortOption;
- (long long)currentViewByOptionValue;
- (void)doEditBarCancelAction;
- (void)doEditBarRedoAction;
- (void)doEditBarSaveAction;
- (void)doEditBarUndoAction;
- (void)doGoBackAction;
- (void)doShowAllSongs;
- (char)editBarIsEditing;
- (char)editBarRedoEnabled;
- (char)editBarSaveEnabled;
- (id)editBarTarget;
- (char)editBarUndoEnabled;
- (id)getSortableTarget;
- (id)propertyKeysForViewSpy;
- (void)setCurrentSecondarySortOption:(long long)a0;
- (void)setCurrentSortDirection:(int)a0;
- (void)setCurrentSortOption:(long long)a0;
- (void)setCurrentViewByOptionValue:(long long)a0;
- (id)supportedSecondarySortOptions;
- (id)supportedSortOptions;
- (id)supportedViewByOptions;

@end
