@class CALayer, NSString, CAFilter;

@interface PKPhoneGlyphLayer : PKMicaLayer {
    CALayer *_QRCodeLayer;
    CAFilter *_QRCodeColorFilter;
    CALayer *_highlightLayer;
    struct CGPoint { double x; double y; } _highlightOffscreenPosition;
    struct CGPoint { double x; double y; } _highlightOnscreenPosition;
    NSString *_phoneWiggleAnimationKey;
    struct CGColor { } *_primaryColor;
}

@property (nonatomic) char showQRCode;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)layerDidBecomeVisible:(char)a0;
- (void)setHighlighted:(char)a0 animated:(char)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 package:(id)a1;
- (void)setPrimaryColor:(struct CGColor { } *)a0 animated:(char)a1;
- (void)_endPhoneWiggle;
- (void)_applyEffectivePrimaryColorToQRCodeAnimated:(char)a0;
- (void)_restartPhoneWiggleIfNecessary;
- (void)_startPhoneWiggle;

@end
