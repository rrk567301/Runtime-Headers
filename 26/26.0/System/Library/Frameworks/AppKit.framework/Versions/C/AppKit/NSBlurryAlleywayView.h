@interface NSBlurryAlleywayView : NSView {
    void /* unknown type, empty encoding */ length;
    void /* unknown type, empty encoding */ blurRadius;
    void /* unknown type, empty encoding */ backdropView;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ punchOutLayer;
}

@property (nonatomic) long long edge;
@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } punchOutEdgeInsets;
@property (nonatomic) double punchOutCornerRadius;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
