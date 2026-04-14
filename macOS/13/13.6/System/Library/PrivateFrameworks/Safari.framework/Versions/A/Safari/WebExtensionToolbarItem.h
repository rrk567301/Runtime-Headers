@class NSPopover, NSString, BrowserWindowController, NSMapTable, SafariWebExtension, NSViewController, WKWebViewConfiguration;

@interface WebExtensionToolbarItem : WBSWebExtensionToolbarItem <NSPopoverDelegate, SafariExtensionPerSiteAccessViewControllerDelegate, WBSWebExtensionToolbarItemImplementation, WKNavigationDelegate, WKUIDelegate> {
    NSMapTable *_browserWindowControllerToToolbarItemMap;
    SafariWebExtension *_webExtension;
    BrowserWindowController *_popupParentBrowserWindowController;
    NSViewController *_popupViewController;
    WKWebViewConfiguration *_popupWebViewConfiguration;
    NSPopover *_popup;
    id /* block */ _popupWebViewReadyForDisplayBlock;
    NSPopover *_perSiteAccessPopup;
}

@property (readonly, copy, nonatomic) NSString *toolbarItemUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *paletteLabel;
@property (readonly, nonatomic) BrowserWindowController *windowControllerForPopup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)popoverDidClose:(id)a0;
- (void)popoverWillClose:(id)a0;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)webView:(id)a0 runOpenPanelWithParameters:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webViewDidClose:(id)a0;
- (id)webExtension;
- (void)validateToolbarItemInAllWindows;
- (void)clearStateForTabWithIdentifier:(id)a0;
- (void)_browserContentDidChange:(id)a0;
- (void)_closePerSiteAccessPopupIfNecessary;
- (void)_manageExtension:(id)a0;
- (void)_popoverWillShow:(id)a0;
- (void)_showExtensionPopupIfNeeded;
- (void)_updateNewExtensionBadgeStateForBrowserWindowController:(id)a0;
- (void)_updateWarningBadgeStateForBrowserWindowController:(id)a0;
- (void)didSelectPerSiteAccess:(long long)a0 forExtension:(id)a1 inBrowserViewController:(id)a2 withDomains:(id)a3;
- (void)didSelectTab:(id)a0;
- (void)didSetBadgeText:(id)a0 forTabWithIdentifier:(id)a1;
- (void)didSetEnabledState:(BOOL)a0 forTabWithIdentifier:(id)a1;
- (void)didSetIcon:(id)a0 forTabWithIdentifier:(id)a1;
- (void)didSetTitle:(id)a0 forTabWithIdentifier:(id)a1;
- (id)initWithWebExtension:(id)a0 label:(id)a1 popupURL:(id)a2 image:(id)a3;
- (void)insertIntoToolbar;
- (id)menuForEvent:(id)a0 inBrowserWindowController:(id)a1;
- (void)performClickActionInWindowController:(id)a0;
- (void)performClickActionWithSender:(id)a0 inBrowserWindowController:(id)a1;
- (void)popupDidNavigateRequestingNewWindowToURL:(id)a0;
- (void)removeFromToolbar;
- (void)showExtensionPopupInBrowserWindowController:(id)a0;
- (void)showExtensionPopupWithSender:(id)a0 inBrowserWindowController:(id)a1;
- (BOOL)showingExtensionPopup;
- (id)toolbarItemForBrowserWindowController:(id)a0;
- (id)toolbarItemForBrowserWindowController:(id)a0 forToolbar:(BOOL)a1;
- (void)updateExtensionIconForBrowserWindowController:(id)a0;

@end
