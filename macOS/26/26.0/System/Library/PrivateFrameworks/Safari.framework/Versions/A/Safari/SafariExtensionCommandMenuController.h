@class NSMenu;

@interface SafariExtensionCommandMenuController : NSObject <WBSExtensionsControllerObserver>

@property (readonly, nonatomic) NSMenu *extensionMenu;

- (id)init;
- (void).cxx_destruct;
- (void)_commandWasUpdated:(id)a0;
- (void)_extensionEnabledStateDidChange:(id)a0;
- (void)_reloadMenu;
- (void)extensionsControllerExtensionListDidChange:(id)a0;
- (void)mainWindowDidChange;

@end
