@interface AppKit.IrisMaskView : NSView {
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ maskPosition;
    void /* unknown type, empty encoding */ additionalOutset;
    void /* unknown type, empty encoding */ blurRadius;
    void /* unknown type, empty encoding */ circleLayer;
}

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic) BOOL clipsToBounds;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
