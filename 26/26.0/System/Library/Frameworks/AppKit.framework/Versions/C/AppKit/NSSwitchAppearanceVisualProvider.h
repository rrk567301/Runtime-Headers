@class NSSwitch, NSView, NSString, NSWidgetView;

@interface NSSwitchAppearanceVisualProvider : NSObject <NSSwitchVisualProvider> {
    NSWidgetView *_trackView;
    NSWidgetView *_shadowView;
    NSWidgetView *_knobView;
    NSWidgetView *_axIndicatorView;
    NSWidgetView *_knobMaskView;
    struct { double scaleFactor; unsigned long long controlSize; long long stateValue; unsigned char isActive : 1; unsigned char isEnabled : 1; unsigned char isHighlighted : 1; unsigned char isRTL : 1; unsigned char shouldShowAxLabels : 1; } _currentDrawingState;
}

@property (weak) NSSwitch *nsSwitch;
@property (readonly) NSWidgetView *_trackView;
@property (readonly) NSWidgetView *_shadowView;
@property (readonly) NSWidgetView *_knobView;
@property (readonly) NSWidgetView *_axIndicatorView;
@property (readonly) NSWidgetView *_knobMaskView;
@property struct { double x0; unsigned long long x1; long long x2; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; } currentDrawingState;
@property (readonly) NSView *designatedFocusRingView;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } trackRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)layout;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)attachToSwitch:(id)a0;
- (void)detachFromSwitch:(id)a0;
- (void)drawingStateDidChangeWithAnimation:(BOOL)a0 controlSizeChanged:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobRectWithThumbOnRight:(BOOL)a0;
- (void)removeSubviews;

@end
