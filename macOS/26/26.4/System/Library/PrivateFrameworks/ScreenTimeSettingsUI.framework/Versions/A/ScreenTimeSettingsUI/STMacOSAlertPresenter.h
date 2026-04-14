@class NSWindow;

@interface STMacOSAlertPresenter : NSObject <STAlertPresenter>

@property (readonly) NSWindow *window;

- (id)initWithWindow:(id)a0;
- (void).cxx_destruct;
- (void)showAlertWithTitle:(id)a0 message:(id)a1 completion:(id /* block */)a2;

@end
