@interface SFSafariApplication : NSObject

+ (void)getActiveWindowWithCompletionHandler:(id /* block */)a0;
+ (void)getAllWindowsWithCompletionHandler:(id /* block */)a0;
+ (void)openWindowWithURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setToolbarItemsNeedUpdate;
+ (void)getHostApplicationWithCompletionHandler:(id /* block */)a0;
+ (void)showPreferencesForExtensionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)dispatchMessageWithName:(id)a0 toExtensionWithIdentifier:(id)a1 userInfo:(id)a2 completionHandler:(id /* block */)a3;

@end
