@class NSMenu;

@interface SafariExtensionCommandMenuController : NSObject <WBSExtensionsControllerObserver>

@property (readonly, nonatomic) NSMenu *extensionMenu;

- (void).cxx_destruct;
- (id)init;
- (void)_commandWasUpdated:(id)a0;
- (void)_extensionEnabledStateDidChange:(id)a0;
- (void)_reloadMenu;
- (void)extensionsControllerExtensionListDidChange:(id)a0;
- (void)mainWindowDidChange;

@end
