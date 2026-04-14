@class Protocol, NSViewController, PHExtensionHostViewPreferredSizes, NSWindow;

@interface PHExtensionServiceViewController : NSServiceViewController <PHExtensionServiceViewControllerProtocol>

@property (class, readonly, nonatomic) Class windowClass;
@property (class, readonly, nonatomic) Class expectedExtensionContextClass;
@property (class, readonly, nonatomic) Protocol *expectedPrincipalObjectProtocol;

@property (retain, nonatomic) NSWindow *serviceWindow;
@property (weak, nonatomic) NSViewController *extensionViewController;
@property (weak, nonatomic) PHExtensionHostViewPreferredSizes *preferredSizes;

- (void)invalidate;
- (void).cxx_destruct;
- (id)exportedObject;
- (id)exportedInterface;
- (struct CGSize { double x0; double x1; })preferredMaximumSize;
- (struct CGSize { double x0; double x1; })preferredMinimumSize;
- (void)loadView;
- (id)remoteViewControllerInterface;
- (BOOL)remoteViewSizeChanged:(struct CGSize { double x0; double x1; })a0 transaction:(id)a1;
- (void)didConnectToExtensionContext:(id)a0;
- (void)connectToContextWithSessionID:(id)a0 sizeHint:(struct CGSize { double x0; double x1; })a1 completionHandler:(id /* block */)a2;
- (void)setupWithController:(id)a0;
- (void)updatePreferredSizesIfNeeeded;

@end
