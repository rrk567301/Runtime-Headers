@class NSObject, NSString, AMPFilterBarViewController;
@protocol AMPFilterableViewModel;

@interface AMPFilterBarToolbar : NSToolbar <NSToolbarDelegate>

@property (retain, nonatomic) AMPFilterBarViewController *mFilterBar;
@property (weak, nonatomic) NSObject<AMPFilterableViewModel> *filterableModel;
@property (nonatomic) BOOL backButtonVisible;
@property (nonatomic) BOOL showSyncLibraryWarning;
@property (nonatomic) BOOL showCloudLoadingMessage;
@property (readonly, nonatomic) BOOL filterFieldIsActive;
@property (readonly, nonatomic) BOOL filteringIsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (BOOL)backdropShouldBeVisible;
- (void)setFilterFieldActive:(BOOL)a0;
- (BOOL)toggleFilterField;

@end
