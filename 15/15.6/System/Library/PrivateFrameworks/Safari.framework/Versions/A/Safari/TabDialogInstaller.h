@class NSString, NSView, BrowserViewController, DimmingView, TabDialogViewController, NSArray;
@protocol TabDialogView;

@interface TabDialogInstaller : NSObject <TabDialogViewControllerPresentationDelegate> {
    DimmingView *_dimmingView;
    NSView<TabDialogView> *_tabDialogView;
    TabDialogViewController *_tabDialogViewController;
    double _verticalOffset;
    NSArray *_dialogPlacementConstraints;
    long long _tabDialogVerticalPlacement;
}

@property (readonly, weak, nonatomic) BrowserViewController *browserViewController;
@property (readonly, weak, nonatomic) NSView *hostingView;
@property (readonly, nonatomic) NSView<TabDialogView> *tabDialogView;
@property (readonly, nonatomic) DimmingView *dimmingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)installTabDialogView:(id)a0 andDimmingView:(id)a1 placement:(long long)a2 verticalOffset:(double)a3 preInstallationCallback:(id /* block */)a4 tabDialogViewController:(id)a5 completionHandler:(id /* block */)a6;
- (void)updateLayoutConstraintsIfNeeded;
- (id)_commonDialogLayoutConstraintsUsingOffset:(double)a0;
- (void)_deactivateWebViewAndInstallDimmingView:(id)a0;
- (id)_dialogPlacementConstraintsForPlacement:(long long)a0 verticalOffset:(double)a1 additionalOffsetToAvoidClickJacking:(double)a2;
- (id)_layoutConstraintsForTabDialogView:(id)a0 andDimmingView:(id)a1 placement:(long long)a2 verticalOffset:(double)a3;
- (id)initWithBrowserViewController:(id)a0 hostingView:(id)a1;
- (void)tabDialogViewControllerDidShowDialog:(id)a0;
- (void)uninstallTabDialogViewAnimated:(char)a0 completionHandler:(id /* block */)a1;

@end
