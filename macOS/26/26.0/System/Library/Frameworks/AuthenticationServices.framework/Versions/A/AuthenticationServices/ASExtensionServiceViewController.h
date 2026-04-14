@class NSExtensionContext, NSWindow;

@interface ASExtensionServiceViewController : NSServiceViewController <ASExtensionServiceProtocol> {
    NSExtensionContext *_extensionContext;
    NSWindow *_window;
}

- (id)exportedInterface;
- (void)loadView;
- (void).cxx_destruct;
- (void)_connectChildView;
- (void)connectToExtensionContextWithRequestIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
