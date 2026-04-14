@class QLBubble;

@interface QLBubbleWindowController : QLPreviewWindowController

@property QLBubble *bubble;

- (void)updateControls;
- (double)_additionalContentInset;
- (double)_intrinsicMargin;

@end
