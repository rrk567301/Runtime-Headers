@class CALayer, KNSlideBackgroundInfo;

@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching> {
    CALayer *_blackBackgroundLayer;
    char _layerNeedsUpdate;
}

@property (readonly) KNSlideBackgroundInfo *slideBackgroundInfo;

+ (id)magicMoveMatchesBetweenOutgoingObjects:(id)a0 andIncomingObjects:(id)a1 textureDescription:(id)a2;

- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { } *)a0;
- (char)isOpaque;
- (char)wantsToDistortWithImagerContext;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (id)textureForDescription:(id)a0;

@end
