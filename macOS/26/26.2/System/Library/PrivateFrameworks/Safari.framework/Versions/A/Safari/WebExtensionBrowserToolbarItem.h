@class NSString, BrowserWindowController, NSMenuItem, WebExtensionToolbarItem;

@interface WebExtensionBrowserToolbarItem : BrowserToolbarItem <BadgedButtonDelegate> {
    NSMenuItem *_menuItemForOverflowMenu;
}

@property (readonly, weak, nonatomic) WebExtensionToolbarItem *webExtensionToolbarItem;
@property (readonly, weak, nonatomic) BrowserWindowController *browserWindowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)validateMenuItem:(id)a0;
- (void)setIcon:(id)a0;
- (void)validate;
- (void).cxx_destruct;
- (void)updateToolTip;
- (void)setBadgeText:(id)a0;
- (void)setCustomTitle:(id)a0;
- (void)_performClickAction:(id)a0;
- (void)_updateExtensionIcon;
- (void)_updateNewExtensionBadgeState;
- (void)_updateWarningBadgeState;
- (id)badgedButton:(id)a0 menuForEvent:(id)a1;
- (void)displayMenu;
- (id)initWithWebExtensionToolbarItem:(id)a0 browserWindowController:(id)a1;
- (void)overflowMenuItemSelected:(id)a0;
- (void)setShowsActiveExtensionIcon:(BOOL)a0;
- (void)setShowsNewExtensionBadge:(BOOL)a0;
- (void)setShowsWarningBadge:(BOOL)a0;

@end
