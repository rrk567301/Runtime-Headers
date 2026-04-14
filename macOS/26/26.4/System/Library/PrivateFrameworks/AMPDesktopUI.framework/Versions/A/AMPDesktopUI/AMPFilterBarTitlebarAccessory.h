@class NSObject, AMPFilterBarViewController;
@protocol AMPFilterableViewModel;

@interface AMPFilterBarTitlebarAccessory : NSTitlebarAccessoryViewController <AMPFilterBarToolbarInterface>

@property (retain, nonatomic) AMPFilterBarViewController *mFilterBar;
@property (weak, nonatomic) NSObject<AMPFilterableViewModel> *filterableModel;
@property (readonly, nonatomic) BOOL backButtonVisible;
@property (nonatomic) BOOL showSyncLibraryWarning;
@property (nonatomic) BOOL showCloudLoadingMessage;
@property (readonly, nonatomic) BOOL filteringIsEnabled;
@property (readonly, nonatomic) BOOL filteringModeIsOn;

- (void)loadView;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)validateMenuItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)backdropShouldBeVisible;
- (void)doShowHideFilterField:(id)a0;
- (void)setFilterFieldActive:(BOOL)a0;
- (void)setFocusOnFilterField;

@end
