@class KHTreatmentLayer;

@interface KHLayerRenderer : NSObject {
    KHTreatmentLayer *_treatmentLayer;
    double _alpha;
    struct { double x; double y; char isRelativeX; char isRelativeY; } _upperLeftInset;
    struct { double x; double y; char isRelativeX; char isRelativeY; } _upperRightInset;
    struct { double x; double y; char isRelativeX; char isRelativeY; } _lowerLeftInset;
    struct { double x; double y; char isRelativeX; char isRelativeY; } _lowerRightInset;
    double _upperLeftRadius;
    double _upperRightRadius;
    double _lowerLeftRadius;
    double _lowerRightRadius;
    double _upperLeftChisel;
    double _upperRightChisel;
    double _lowerLeftChisel;
    double _lowerRightChisel;
    struct { double x; double y; char isRelativeX; char isRelativeY; } _upperLeftInsetFromParent;
    struct { double x; double y; char isRelativeX; char isRelativeY; } _upperRightInsetFromParent;
    struct { double x; double y; char isRelativeX; char isRelativeY; } _lowerLeftInsetFromParent;
    struct { double x; double y; char isRelativeX; char isRelativeY; } _lowerRightInsetFromParent;
    struct { double top; char isTopRelative; double left; char isLeftRelative; double bottom; char isBottomRelative; double right; char isRightRelative; } _safeRectMargin;
    char _allowRendererCaching;
}

+ (id)supportedAttributes;
+ (void)addStandardAttributesToDictionary:(id)a0;

- (void)dealloc;
- (struct CGPath { } *)createInsetPathForPath:(struct CGPath { } *)a0 atScale:(double)a1;
- (char)allowRendererCaching;
- (struct CGPath { } *)createClippingPathForPath:(struct CGPath { } *)a0 atScale:(double)a1;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 forPath:(struct CGPath { } *)a2 atScale:(double)a3 treatmentFactor:(double)a4 flipped:(char)a5;
- (char)hasChisel;
- (char)hasInsets;
- (id)initWithTreatmentLayer:(id)a0;
- (void)loadAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForFrame:(id)a0 atScale:(double)a1;
- (struct { double x0; char x1; double x2; char x3; double x4; char x5; double x6; char x7; })safeRectMarginForPath:(struct CGPath { } *)a0 atScale:(double)a1;
- (void)setTreatmentLayer:(id)a0;
- (id)treatmentLayer;

@end
