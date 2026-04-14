@class NSWindow, SFSafariExtensionContext;

@interface SFSafariExtensionServiceViewController : NSServiceViewController <SFSafariRemoteViewProtocol> {
    NSWindow *_window;
}

@property (weak, nonatomic) SFSafariExtensionContext *extensionContext;

- (void)invalidate;
- (id)exportedInterface;
- (void).cxx_destruct;
- (void)loadView;
- (void)_connectChildView;
- (void)connectToContextWithSessionID:(id)a0 completionHandler:(id /* block */)a1;

@end
