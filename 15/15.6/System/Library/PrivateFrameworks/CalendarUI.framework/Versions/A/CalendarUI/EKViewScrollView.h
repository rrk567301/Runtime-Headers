@class EKUIGadgetContainer, EKViewController;

@interface EKViewScrollView : NSScrollView

@property (weak) EKUIGadgetContainer *container;
@property (weak) EKViewController *viewController;
@property char isEnabled;
@property char shouldScrollToTop;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (char)isAccessibilityElement;
- (void)scrollWheel:(id)a0;
- (void)scrollToTop;
- (id)initWithDocumentView:(id)a0;
- (void)resolutionDidChange:(id)a0;
- (void)updateScrollState;

@end
