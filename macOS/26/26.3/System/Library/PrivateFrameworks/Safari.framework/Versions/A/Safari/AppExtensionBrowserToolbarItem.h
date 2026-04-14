@class NSUUID, BrowserWindowController, NSString, SafariAppExtensionsController, NSMenuItem, AppExtensionToolbarItem;

@interface AppExtensionBrowserToolbarItem : BrowserToolbarItem <BadgedButtonDelegate> {
    SafariAppExtensionsController *_appExtensionsController;
    NSMenuItem *_menuItemForOverflowMenu;
}

@property (readonly, nonatomic) BOOL canBeDisabledByExtension;
@property (readonly, weak, nonatomic) AppExtensionToolbarItem *appExtensionToolbarItem;
@property (readonly, weak, nonatomic) BrowserWindowController *browserWindowController;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)validateMenuItem:(id)a0;
- (void)validate;
- (void)setIcon:(id)a0;
- (void).cxx_destruct;
- (void)showPopover;
- (void)updateToolTip;
- (void)setBadgeText:(id)a0;
- (BOOL)_extensionNeedsAccessToCurrentURL;
- (void)_manageExtension:(id)a0;
- (void)_performClickAction:(id)a0;
- (id)badgedButton:(id)a0 menuForEvent:(id)a1;
- (void)displayMenu;
- (id)initWithExtensionToolbarItem:(id)a0 browserWindowController:(id)a1 extensionsController:(id)a2;
- (void)overflowMenuItemSelected:(id)a0;
- (void)setShowsActiveExtensionIcon:(BOOL)a0;
- (void)setShowsNewExtensionBadge:(BOOL)a0;

@end
