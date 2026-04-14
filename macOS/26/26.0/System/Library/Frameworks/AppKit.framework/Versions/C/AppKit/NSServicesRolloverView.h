@class NSTextAttachmentViewProvider, NSTrackingArea;
@protocol NSServicesRolloverViewDelegate;

@interface NSServicesRolloverView : NSView {
    NSTrackingArea *_rolloverTrackingArea;
    id<NSServicesRolloverViewDelegate> _delegate;
    long long _style;
    BOOL _mouseInside;
}

@property (weak) id<NSServicesRolloverViewDelegate> delegate;
@property NSTextAttachmentViewProvider *textAttachmentViewProvider;

- (void)mouseDown:(id)a0;
- (void)dealloc;
- (BOOL)isFlipped;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithDelegate:(id)a0 style:(long long)a1;

@end
