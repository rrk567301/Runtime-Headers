@class NSView, NSString, _VisualScrubberItemViewAccessibilityWrapper;
@protocol VisualScrubberItemViewAccessibilityDelegate;

@interface VisualScrubberItemView : NSScrubberItemView {
    NSView *_lighteningLayerView;
    NSView *_tintOverlayView;
    _VisualScrubberItemViewAccessibilityWrapper *_accessibilityWrapper;
}

@property (retain, nonatomic) NSView *innerView;
@property (copy, nonatomic) NSString *contentSizeObservationKey;
@property (weak, nonatomic) id<VisualScrubberItemViewAccessibilityDelegate> accessibilityDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_clearInnerViewObservers;
- (struct CGSize { double x0; double x1; })_innerViewSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addInnerViewObservers;
- (void)setInnerView:(id)a0 contentSizeObservationKey:(id)a1;
- (void)_updateTint;
- (void)setAcccessibilityDelegate:(id)a0;

@end
