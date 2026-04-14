@interface CoreHapticsTools.CHTBaseView : NSView {
    void /* unknown type, empty encoding */ selectedEventsDelegate;
    void /* unknown type, empty encoding */ windowDuration;
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ document;
    void /* unknown type, empty encoding */ prevBounds;
    void /* unknown type, empty encoding */ contentLayer;
    void /* unknown type, empty encoding */ kvoToken;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) BOOL flipped;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
