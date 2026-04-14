@class QLBubble;

@interface QLBubbleWindowController : QLPreviewWindowController

@property (weak) QLBubble *bubble;

- (void).cxx_destruct;
- (void)updateControls;
- (double)_intrinsicMargin;
- (double)_additionalContentInset;

@end
