@class PXGLayout, NSView, PXScrollViewController;
@protocol PXGHitTestEnvironment;

@interface PXGInteraction : NSObject

@property (weak, nonatomic) PXGLayout *layout;
@property (weak, nonatomic) NSView<PXGHitTestEnvironment> *view;
@property (weak, nonatomic) PXScrollViewController *scrollViewController;

- (void).cxx_destruct;
- (void)layoutDidChange;
- (void)viewDidChange;
- (void)viewWillChange;
- (void)scrollViewControllerDidChange;

@end
