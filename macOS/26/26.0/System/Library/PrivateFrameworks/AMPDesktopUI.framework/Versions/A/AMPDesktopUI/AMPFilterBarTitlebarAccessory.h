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

- (BOOL)validateMenuItem:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)backdropShouldBeVisible;
- (void)doShowHideFilterField:(id)a0;
- (void)setFilterFieldActive:(BOOL)a0;
- (BOOL)toggleFilterField;

@end
