@class EKUIGadgetContainer, EKViewController;

@interface EKViewScrollView : NSScrollView

@property (weak) EKUIGadgetContainer *container;
@property (weak) EKViewController *viewController;
@property BOOL isEnabled;
@property BOOL shouldScrollToTop;

- (void)layout;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)dealloc;
- (void)scrollWheel:(id)a0;
- (void)scrollToTop;
- (id)initWithDocumentView:(id)a0;
- (void)resolutionDidChange:(id)a0;
- (void)updateScrollState;

@end
