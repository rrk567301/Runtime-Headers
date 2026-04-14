@class NSView, NSTrackingArea;
@protocol BarBackgroundMouseTrackingDelegate;

@interface BarBackground : KeyLoopSplicingContainerView {
    BOOL _becomingFirstResponder;
    NSView *_mainContentContainerView;
    NSTrackingArea *_trackingArea;
}

@property BOOL mouseDownCanMoveWindow;
@property (retain, nonatomic) NSView *contentView;
@property (weak, nonatomic) id<BarBackgroundMouseTrackingDelegate> mouseTrackingDelegate;

- (void)commonInit;
- (BOOL)isAccessibilityElement;
- (void)mouseExited:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTrackingAreas;
- (id)accessibilityRole;
- (void)mouseEntered:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_windowChangedKeyState;
- (void)_makeTrackingArea;

@end
