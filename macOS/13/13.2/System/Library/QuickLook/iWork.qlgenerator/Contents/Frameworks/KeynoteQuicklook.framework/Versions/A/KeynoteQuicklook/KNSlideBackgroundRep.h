@class CALayer, KNSlideBackgroundInfo;

@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching> {
    CALayer *_blackBackgroundLayer;
    BOOL _layerNeedsUpdate;
    BOOL _showStaticFill;
    BOOL _showMotionBackground;
}

@property (readonly) KNSlideBackgroundInfo *slideBackgroundInfo;

+ (id)magicMoveMatchesBetweenOutgoingObjects:(id)a0 andIncomingObjects:(id)a1 textureDescription:(id)a2;

- (void).cxx_destruct;
- (BOOL)isOpaque;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)wantsToDistortWithImagerContext;
- (id)textureForDescription:(id)a0;

@end
