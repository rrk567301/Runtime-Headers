@class TabDialogDimmingView, NSString, TabDialogInstaller, BrowserViewController, TabDialogViewController;
@protocol TabDialogPresentationManagerDelegate;

@interface TabDialogPresentationManager : NSObject <TabDialogPresenter> {
    BrowserViewController *_browserViewController;
    TabDialogDimmingView *_dimmingView;
    TabDialogInstaller *_tabDialogInstallerForRedirection;
}

@property (readonly, nonatomic) TabDialogViewController *tabDialogViewController;
@property (weak, nonatomic) id<TabDialogPresentationManagerDelegate> delegate;
@property (readonly, nonatomic, getter=isShowingTabDialog) BOOL showingTabDialog;
@property (readonly, nonatomic) long long currentTabDialogType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dismissTabDialog;
- (void)presentTabDialogWithConfiguration:(id)a0 dismissalBlock:(id /* block */)a1 blocksWebProcessUntilDismissed:(BOOL)a2 cancellationExemptions:(id)a3;
- (void)_didDismissTabDialogs;
- (void)transplantDialogToNewInstallationTarget;
- (void)unblockWebProcess:(int)a0;
- (void)owningWebViewWillNavigate;
- (void)cancelAllDialogsFromOwningWebView;
- (void)cancelAllDialogsFromOwningWebViewOnCommittedNavigationWithURL:(id)a0;
- (void)startRedirectingTabDialogPresentationForBrowserViewController:(id)a0;
- (void)stopRedirectingTabDialogs;
- (void)showJavaScriptAlertWithMessage:(id)a0 originStringForAccessibility:(id)a1 responseHandler:(id /* block */)a2;
- (void)showJavaScriptConfirmWithMessage:(id)a0 originStringForAccessibility:(id)a1 responseHandler:(id /* block */)a2;
- (void)showJavaScriptPromptWithMessage:(id)a0 defaultResponse:(id)a1 originStringForAccessibility:(id)a2 responseHandler:(id /* block */)a3;
- (void)updateCurrentDialogWithConfiguration:(id)a0 dismissalBlock:(id /* block */)a1;
- (void)_transplantDialogAndDimmingViewToTabContentViewIfNeeded;
- (id)_tabDialogViewControllerForConfiguration:(id)a0;
- (BOOL)_isRedirectingDialogPresentation;
- (void)_presentRedirectedDialogWithViewController:(id)a0;
- (long long)_tabDialogVerticalPlacementPolicyForViewController:(id)a0;
- (struct { int x0; unsigned long long x1; })_tabDialogSlot;
- (void)dismissTabDialogWithResponse:(id)a0;
- (BOOL)_shouldSkipAnimationsDuringDismissal;
- (void)_dismissRedirectedDialogWithResponseBlock:(id /* block */)a0;
- (id)_ensureTabDialogInstallerForRedirection;

@end
