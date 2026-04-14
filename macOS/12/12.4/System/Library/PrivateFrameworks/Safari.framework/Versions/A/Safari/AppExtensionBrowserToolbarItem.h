@class NSUUID, BrowserWindowController, NSString, NSImage, AppExtensionToolbarItem;

@interface AppExtensionBrowserToolbarItem : BrowserToolbarItem <BadgedButtonDelegate> {
    NSImage *_activeImage;
}

@property (readonly, weak, nonatomic) AppExtensionToolbarItem *appExtensionToolbarItem;
@property (readonly, weak, nonatomic) BrowserWindowController *browserWindowController;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setIcon:(id)a0;
- (void)validate;
- (void)showPopover;
- (void)setBadgeText:(id)a0;
- (id)initWithExtensionToolbarItem:(id)a0 browserWindowController:(id)a1;
- (void)setShowsActiveExtensionIcon:(BOOL)a0;
- (void)_performClickAction:(id)a0;
- (void)_setImage:(id)a0 forButton:(id)a1;
- (void)_manageExtension:(id)a0;
- (id)badgedButton:(id)a0 menuForEvent:(id)a1;

@end
