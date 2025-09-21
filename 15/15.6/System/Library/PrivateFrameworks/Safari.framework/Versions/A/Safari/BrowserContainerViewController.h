@class TabDialogInstaller, NSView, BrowserViewController, NSString, WBSPair;

@interface BrowserContainerViewController : NSViewController <TabDialogInstallationTarget> {
    NSView *_firstResponderViewBeforeDimmingViewPresentation;
    WBSPair *_currentURLToUsageState;
}

@property (readonly, nonatomic) BrowserViewController *browserViewController;
@property (readonly, nonatomic) TabDialogInstaller *tabDialogInstaller;
@property (readonly, nonatomic) NSView *tabDialogHostingView;
@property (readonly, nonatomic) char isShowingTabDialog;
@property (readonly, nonatomic) char didFireCloseEvent;
@property (readonly, nonatomic) char isWindowClosing;
@property (readonly, nonatomic) char isBrowserViewVisible;
@property (readonly, nonatomic) char isWindowMainWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)_isShowingPagePreview;
- (void)didFinishShowingDialog;
- (void)installTabDialogView:(id)a0 andDimmingView:(id)a1 placement:(long long)a2 tabDialogViewController:(id)a3 completionHandler:(id /* block */)a4;
- (void)resetTabDialogInstaller;
- (void)transplantTabDialogView:(id)a0 andDimmingView:(id)a1 placement:(long long)a2 tabDialogViewController:(id)a3;
- (void)uninstallTabDialogViewAnimated:(char)a0 completionHandler:(id /* block */)a1;
- (void)updateUsageTrackingInformation;
- (void)updateUsageTrackingInformationAfterShowingDigitalHealthOverlay;
- (void)willShowDialog;

@end
