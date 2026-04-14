@interface _TtCE6AppKitCSo28_NSIntelligenceUIPlatterView20ContinuousCornerView : NSView {
    void /* unknown type, empty encoding */ lineWidth;
    void /* unknown type, empty encoding */ strokeColor;
    void /* unknown type, empty encoding */ fillColor;
}

@property (nonatomic, readonly) BOOL wantsUpdateLayer;
@property (nonatomic) double cornerRadius;

+ (BOOL)mightNeedToClipToBoundsBecauseOfSomeOtherProperty;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;

@end
