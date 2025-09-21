@class TSDMovieInfo;

@interface TSDMovieRep : TSDMediaRep

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;
@property (nonatomic) struct CGImage { } *alternatePosterImage;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;

- (void)dealloc;
- (void)willBeRemoved;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (id)movieLayout;
- (void)p_drawInContext:(struct CGContext { } *)a0 withContent:(char)a1 withStroke:(char)a2 withOpacity:(double)a3 withMask:(char)a4 forShadowOrHitTest:(char)a5;
- (void)updateFromLayout;
- (void)calculateTextureClipBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 andOffset:(struct CGPoint { double x0; double x1; } *)a1 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a2 andRectOnCanvas:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 textureDescription:(id)a4 isUsingImageTexture:(char)a5;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(char)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(char)a3 forAlphaOnly:(char)a4 drawChildren:(char)a5 keepingChildrenPassingTest:(id /* block */)a6;
- (struct CGImage { } *)newTextureMaskImageForViewScale:(double)a0 includeFrameMask:(char)a1 maskRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (char)p_shouldUseImageTexture;
- (id)textureForDescription:(id)a0;
- (void)p_drawPosterImageInContext:(struct CGContext { } *)a0 forShadowOrHitTest:(char)a1;
- (void)updateFrameRep;

@end
