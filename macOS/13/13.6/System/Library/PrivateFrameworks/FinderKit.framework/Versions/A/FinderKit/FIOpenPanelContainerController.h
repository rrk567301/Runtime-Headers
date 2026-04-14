@interface FIOpenPanelContainerController : FIContainerController

+ (void)initialize;
+ (id)keyPathsForValuesAffectingAllowsNewDocumentButton;

- (BOOL)canShare;
- (BOOL)allowsNewDocumentButton;
- (void)configureAccessoryViews:(id)a0;
- (unsigned int)defaultSearchScope;
- (BOOL)isAppCentric;
- (id)nodeViewSettings;
- (id)opGutsController;
- (void)saveShowSidebarStateToPrefs;
- (void)searchFieldCancel;
- (BOOL)shouldShowSidebarSplitter;

@end
