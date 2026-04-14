@class NSExtensionContext, NSWindow;

@interface ASExtensionServiceViewController : NSServiceViewController <ASExtensionServiceProtocol> {
    NSExtensionContext *_extensionContext;
    NSWindow *_window;
}

- (void)loadView;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)_connectChildView;
- (void)connectToExtensionContextWithRequestIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
