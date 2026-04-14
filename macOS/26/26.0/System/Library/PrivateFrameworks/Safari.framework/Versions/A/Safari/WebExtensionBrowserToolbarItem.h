@class NSString, BrowserWindowController, WebExtensionToolbarItem;

@interface WebExtensionBrowserToolbarItem : BrowserToolbarItem <BadgedButtonDelegate>

@property (readonly, weak, nonatomic) WebExtensionToolbarItem *webExtensionToolbarItem;
@property (readonly, weak, nonatomic) BrowserWindowController *browserWindowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)validate;
- (void)setIcon:(id)a0;
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
- (void)setShowsActiveExtensionIcon:(BOOL)a0;
- (void)setShowsNewExtensionBadge:(BOOL)a0;
- (void)setShowsWarningBadge:(BOOL)a0;

@end
