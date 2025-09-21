@class NSString, NSView, BUStarfieldTimelineLayer;

@interface BU_TMTimeline : CALayer {
    BOOL fEnabled;
    long long fValue;
    long long fMin;
    long long fMax;
    NSString *fHelpString;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fTitle;
    double fRedrawDuration;
    NSView *fParent;
    BUStarfieldTimelineLayer *fSuperLayer;
    struct shared_ptr<TTimelineControl> { struct TTimelineControl *__ptr_; struct __shared_weak_count *__cntrl_; } fTimeline;
}

+ (id)controlWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
+ (id)timelineControlWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inSuperLayer:(id)a1;

- (void)setParent:(id)a0;
- (void *)timeline;
- (void)setValue:(long long)a0;
- (long long)max;
- (long long)min;
- (long long)value;
- (id)parent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEnabled;
- (void)invalidate;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)setEnabled:(BOOL)a0;
- (id)init;
- (id)title;
- (void)setTitle:(id)a0;
- (id).cxx_construct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)setMax:(long long)a0;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (void)setMin:(long long)a0;
- (void)valueDidChange:(long long)a0;
- (BOOL)mouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0 withModifiers:(unsigned int)a1;
- (id)helpString;
- (BOOL)mouseDraggedToPoint:(struct CGPoint { double x0; double x1; })a0 withModifiers:(unsigned int)a1;
- (void)mouseMovedToPoint:(struct CGPoint { double x0; double x1; })a0 withModifiers:(unsigned int)a1;
- (BOOL)mouseUpAtPoint:(struct CGPoint { double x0; double x1; })a0 withModifiers:(unsigned int)a1;
- (BOOL)pixelAccurateHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollByX:(double)a0 byY:(double)a1 withModifiers:(unsigned int)a2;
- (void)setHelpString:(id)a0;
- (void)setRedrawDuration:(double)a0;
- (void)setSuperLayer:(id)a0;
- (id)superLayer;
- (BOOL)valueWillChange:(long long)a0;

@end
