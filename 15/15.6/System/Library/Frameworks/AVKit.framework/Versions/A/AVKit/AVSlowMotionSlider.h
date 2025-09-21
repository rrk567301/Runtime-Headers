@class NSView, NSMutableArray;
@protocol AVSlowMotionSliderDelegate;

@interface AVSlowMotionSlider : NSView {
    double _minValue;
    double _maxValue;
    id<AVSlowMotionSliderDelegate> _delegate;
    struct { char slowMotionSliderMouseDownEventTrackingBegan; char slowMotionSlider_tracksMouseDownEventWithCurrentValue; char slowMotionSliderMouseDownEventTrackingEnded; } _delegateRespondsTo;
    NSView *_trackView;
    NSView *_minHandleView;
    NSView *_maxHandleView;
    char _needsUpdateTrackAndHandles;
    NSMutableArray *_layoutConstraints;
}

@property double minValue;
@property double maxValue;
@property (weak) id<AVSlowMotionSliderDelegate> delegate;

+ (char)automaticallyNotifiesObserversOfMaxValue;
+ (char)automaticallyNotifiesObserversOfMinValue;

- (void)dealloc;
- (void).cxx_destruct;
- (char)allowsVibrancy;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDown:(id)a0;
- (char)mouseDownCanMoveWindow;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setNeedsUpdateTrackAndHandles;
- (void)_updateTrackAndHandles;
- (void)_updateTrackAndHandlesIfNeeded;

@end
