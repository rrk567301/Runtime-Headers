@class NSString, QLPreviewExtensionServiceContext_mac, NSViewController;
@protocol QLPreviewingController;

@interface QLPreviewExtensionViewController : QLUIServiceBaseViewController <QLPreviewingControllerOwner, QLPreviewExtensionViewControllerProtocol>

@property (weak, nonatomic) QLPreviewExtensionServiceContext_mac *extensionContext;
@property (nonatomic) int previewMode;
@property (readonly) NSViewController<QLPreviewingController> *previewViewController;
@property BOOL needsSetupConstraints;
@property (readonly) BOOL hostIsAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingHostIsAnimating;

- (id)exportedInterface;
- (void)loadView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceFrame;
- (void)dealloc;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderFrame;
- (id)pasteboardWriter;
- (id)draggedURL;
- (void)getImageRepresentationWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;
- (void)hookUpToExtensionContextWithUUID:(id)a0 withHints:(id)a1 completionHandler:(id /* block */)a2;
- (void)setupSizeWithContentBasedSizing:(BOOL)a0;

@end
