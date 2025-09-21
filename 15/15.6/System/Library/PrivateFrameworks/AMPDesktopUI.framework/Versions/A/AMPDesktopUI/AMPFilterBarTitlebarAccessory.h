@class NSObject, AMPFilterBarViewController;
@protocol AMPFilterableViewModel;

@interface AMPFilterBarTitlebarAccessory : NSTitlebarAccessoryViewController <AMPFilterBarToolbarInterface>

@property (retain, nonatomic) AMPFilterBarViewController *mFilterBar;
@property (weak, nonatomic) NSObject<AMPFilterableViewModel> *filterableModel;
@property (readonly, nonatomic) char backButtonVisible;
@property (nonatomic) char showSyncLibraryWarning;
@property (nonatomic) char showCloudLoadingMessage;
@property (readonly, nonatomic) char filteringIsEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (char)validateMenuItem:(id)a0;
- (void)viewDidLoad;
- (char)backdropShouldBeVisible;
- (void)doShowHideFilterField:(id)a0;
- (void)setFilterFieldActive:(char)a0;
- (char)toggleFilterField;

@end
