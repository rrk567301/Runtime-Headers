@interface _TtCC7SwiftUI17HostingScrollViewP33_6B9589E2B2301F373BAB5CF17408C3848Scroller : NSScroller {
    void /* unknown type, empty encoding */ indicatorVisibility;
}

@property (class, nonatomic, readonly) BOOL compatibleWithOverlayScrollers;

@property (nonatomic, readonly) unsigned long long usableParts;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawKnobSlotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highlight:(BOOL)a1;
- (void)drawKnob;

@end
