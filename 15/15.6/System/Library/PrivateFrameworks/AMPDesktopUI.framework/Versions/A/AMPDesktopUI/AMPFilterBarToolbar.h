@class NSArray, NSDictionary, NSString, NSObject, AMPFilterBarViewController;
@protocol AMPFilterableViewModel;

@interface AMPFilterBarToolbar : NSToolbar <NSToolbarDelegate, AMPFilterBarToolbarInterface>

@property (retain, nonatomic) AMPFilterBarViewController *mFilterBar;
@property (retain, nonatomic) NSDictionary *sidebarToolbarItemDict;
@property (retain, nonatomic) NSArray *sidebarToolbarItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMPFilterableViewModel> *filterableModel;
@property (readonly, nonatomic) char backButtonVisible;
@property (nonatomic) char showSyncLibraryWarning;
@property (nonatomic) char showCloudLoadingMessage;
@property (readonly, nonatomic) char filteringIsEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(char)a2;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (char)validateMenuItem:(id)a0;
- (char)backdropShouldBeVisible;
- (void)doShowHideFilterField:(id)a0;
- (void)setFilterFieldActive:(char)a0;
- (char)toggleFilterField;

@end
