@interface CoreHapticsTools.CHTBaseView : NSView {
    void /* unknown type, empty encoding */ selectedObjectsDelegate;
    void /* unknown type, empty encoding */ windowDuration;
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ document;
    void /* unknown type, empty encoding */ prevBounds;
    void /* unknown type, empty encoding */ contentLayer;
}

@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic, readonly) BOOL flipped;

- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
