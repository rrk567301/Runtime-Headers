@interface FIOpenPanelContainerController : FIContainerController

+ (void)initialize;

- (BOOL)canShare;
- (BOOL)allowsNewDocumentButton;
- (void)configureAccessoryViews:(id)a0;
- (BOOL)shouldShowSidebarSplitter;
- (id)nodeViewSettings;
- (BOOL)isAppCentric;
- (void)searchFieldCancel;
- (id)opGutsController;
- (unsigned int)defaultSearchScope;
- (void)saveShowSidebarStateToPrefs;

@end
