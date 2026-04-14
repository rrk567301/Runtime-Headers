@class NSWindow, SFSafariExtensionContext;

@interface SFSafariExtensionServiceViewController : NSServiceViewController <SFSafariRemoteViewProtocol> {
    NSWindow *_window;
}

@property (weak, nonatomic) SFSafariExtensionContext *extensionContext;

- (void)invalidate;
- (void)loadView;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)_connectChildView;
- (void)connectToContextWithSessionID:(id)a0 completionHandler:(id /* block */)a1;

@end
