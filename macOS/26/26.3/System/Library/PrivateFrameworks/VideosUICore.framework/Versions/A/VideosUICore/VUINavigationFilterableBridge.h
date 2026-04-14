@class NSToolbarItem, NSString, NSView, NSViewController, NSArray;

@interface VUINavigationFilterableBridge : NSObject <AMPFilterableViewModel>

@property (weak, nonatomic) NSViewController *bridgedController;
@property (nonatomic) BOOL contentIsScrolled;
@property (readonly, nonatomic) BOOL filteringIsEnabled;
@property (readonly, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *filterString;
@property (readonly, nonatomic) NSString *filterStatusString;
@property (readonly, nonatomic) BOOL showFilterBarBackground;
@property (readonly, nonatomic) NSView *secondaryControlView;
@property (readonly, nonatomic) NSArray *additionalToolbarItems;
@property (readonly, nonatomic) BOOL goBackButtonEnabled;
@property (readonly, nonatomic) NSArray *supportedFilterCategories;
@property (nonatomic) unsigned long long currentFilterCategories;
@property (readonly, copy, nonatomic) id /* block */ showAllViewOptionsBlock;
@property (readonly, nonatomic) NSToolbarItem *centerDisplayItem;
@property (readonly, nonatomic) NSString *filterPlaceholder;
@property (readonly, nonatomic) BOOL showFilterBarTitle;
@property (readonly, nonatomic) BOOL onlyShowFilterBarTitleWithSubtitle;
@property (readonly, nonatomic) NSString *temporaryConditionDescription;
@property (readonly, nonatomic) NSString *temporaryResolutionButtonTitle;
@property (readonly, nonatomic) BOOL showDownloadedSongsMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingAdditionalToolbarItems;
+ (id)keyPathsForValuesAffectingCenterDisplayItem;
+ (id)keyPathsForValuesAffectingSecondaryControlView;
+ (id)keyPathsForValuesAffectingShowFilterBarBackground;
+ (id)bridgeForController:(id)a0;

- (void).cxx_destruct;
- (void)doShowAllSongs;
- (id)_barButtonViewFromItem:(id)a0;
- (id)_createStackViewAddSubViews:(id)a0;

@end
