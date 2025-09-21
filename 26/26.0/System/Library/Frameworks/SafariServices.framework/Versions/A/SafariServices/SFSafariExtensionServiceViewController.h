@class NSWindow, SFSafariExtensionContext;

@interface SFSafariExtensionServiceViewController : NSServiceViewController <SFSafariRemoteViewProtocol> {
    NSWindow *_window;
}

@property (weak, nonatomic) SFSafariExtensionContext *extensionContext;

- (id)exportedInterface;
- (void)loadView;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_connectChildView;
- (void)connectToContextWithSessionID:(id)a0 completionHandler:(id /* block */)a1;

@end
