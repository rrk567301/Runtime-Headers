@interface AppKit._MultiShadowReportingView : NSView {
    void /* unknown type, empty encoding */ shadows;
    void /* unknown type, empty encoding */ _alignmentRectInsets;
    void /* unknown type, empty encoding */ _firstBaselineOffsetFromTop;
    void /* unknown type, empty encoding */ _lastBaselineOffsetFromBottom;
    void /* unknown type, empty encoding */ _intrinsicContentSize;
}

@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic, readonly) double firstBaselineOffsetFromTop;
@property (nonatomic, readonly) double lastBaselineOffsetFromBottom;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
