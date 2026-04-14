@class NSString, NSView, NSObject;
@protocol AMPFilterableViewModel;

@interface AMPFilterableViewModelForwarder : NSObject <AMPFilterableViewModel>

@property (nonatomic) BOOL filteringIsEnabled;
@property (retain, nonatomic) NSObject<AMPFilterableViewModel> *forwardingTarget;
@property (copy, nonatomic) NSString *filterString;
@property (readonly, nonatomic) NSString *filterStatusString;
@property (readonly, nonatomic) BOOL showDownloadedSongsMessage;
@property (readonly, nonatomic) BOOL showFilterBarBackground;
@property (readonly, nonatomic) NSView *secondaryControlView;
@property (readonly, nonatomic) BOOL goBackButtonEnabled;
@property (readonly, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingCurrentSecondarySortOption;
+ (id)keyPathsForValuesAffectingCurrentSortDirection;
+ (id)keyPathsForValuesAffectingCurrentSortOption;
+ (id)keyPathsForValuesAffectingFilterString;
+ (id)keyPathsForValuesAffectingGoBackButtonEnabled;
+ (id)keyPathsForValuesAffectingSecondaryControlView;
+ (id)keyPathsForValuesAffectingShowDownloadedSongsMessage;
+ (id)keyPathsForValuesAffectingShowFilterBarBackground;
+ (id)keyPathsForValuesAffectingSupportedSortOptions;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (long long)currentSecondarySortOption;
- (int)currentSortDirection;
- (long long)currentSortOption;
- (void)doShowAllSongs;
- (id)getSortableTarget;
- (id)propertyKeysForViewSpy;
- (void)setCurrentSecondarySortOption:(long long)a0;
- (void)setCurrentSortDirection:(int)a0;
- (void)setCurrentSortOption:(long long)a0;
- (id)supportedSecondarySortOptions;
- (id)supportedSortOptions;

@end
