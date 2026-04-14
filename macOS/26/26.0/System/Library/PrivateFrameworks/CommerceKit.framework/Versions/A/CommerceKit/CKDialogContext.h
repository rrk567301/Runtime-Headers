@class NSString, NSImage, NSURL, NSWindow;

@interface CKDialogContext : NSObject <NSCopying, AMSRequestPresentationDelegate> {
    int _proxyPID;
    NSURL *_proxyBundleURL;
}

@property int proxyPID;
@property (copy) NSURL *proxyBundleURL;
@property (weak) NSWindow *hostWindow;
@property (retain) NSImage *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_viewController;
- (void).cxx_destruct;
- (void)handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;
- (char)_clickedButtonForModalResponse:(long long)a0;
- (id)_alertForDialog:(id)a0;
- (void)displayDialog:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
