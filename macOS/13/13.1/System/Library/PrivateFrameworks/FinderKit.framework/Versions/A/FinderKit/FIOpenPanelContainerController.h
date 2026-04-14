@interface FIOpenPanelContainerController : FIContainerController

+ (void)initialize;
+ (id)keyPathsForValuesAffectingAllowsNewDocumentButton;

- (BOOL)canShare;
- (void)configureAccessoryViews:(id)a0;
- (BOOL)shouldShowSidebarSplitter;
- (id)nodeViewSettings;
- (BOOL)isAppCentric;
- (void)searchFieldCancel;
- (id)opGutsController;
- (unsigned int)defaultSearchScope;
- (BOOL)allowsNewDocumentButton;
- (void)saveShowSidebarStateToPrefs;

@end
