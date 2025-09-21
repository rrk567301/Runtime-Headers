@class NSArray, PKPassViewerViewController, NSString;

@interface PKPassWindowController : PKWindowController <PKPassViewerDelegate>

@property (readonly) PKPassViewerViewController *passViewController;
@property (readonly) NSArray *passes;
@property BOOL didAddPass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })windowSize;
- (void).cxx_destruct;
- (id)windowTitle;
- (id)initWithPasses:(id)a0;
- (id)createChildViewController;
- (void)passViewer:(id)a0 closeClicked:(id)a1;
- (void)passViewer:(id)a0 didAddToPassbook:(id)a1;
- (void)passViewer:(id)a0 didChangePass:(id)a1;

@end
