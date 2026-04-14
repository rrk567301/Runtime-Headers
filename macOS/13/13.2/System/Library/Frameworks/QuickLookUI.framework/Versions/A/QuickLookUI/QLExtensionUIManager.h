@class QLExtensionManager;

@interface QLExtensionUIManager : NSObject

@property (retain) QLExtensionManager *extensionManager;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)remoteViewControllerForPreview:(id)a0 withHints:(id)a1 completionHandler:(id /* block */)a2;
- (void)_viewControllerForExtension:(id)a0 context:(id)a1 requestIdentifier:(id)a2 hints:(id)a3 withCompletionHandler:(id /* block */)a4;

@end
