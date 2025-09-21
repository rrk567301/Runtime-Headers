@class KNLiveVideoInfo, TSDFrameRep, KNLiveVideoLayout, _TtC16KeynoteQuicklook36KNLiveVideoSourceSymbolDrawingHelper;

@interface KNLiveVideoRep : TSDStyledRep {
    TSDFrameRep *_frameRep;
    _TtC16KeynoteQuicklook36KNLiveVideoSourceSymbolDrawingHelper *_symbolDrawingHelper;
}

@property (readonly, nonatomic) KNLiveVideoInfo *liveVideoInfo;
@property (readonly, nonatomic) KNLiveVideoLayout *liveVideoLayout;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;
+ (id)p_sourceSymbolDrawingHelperForSource:(id)a0 reusingSourceSymbolDrawingHelperIfPossible:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (char)isPlaceholder;
- (void)willBeRemoved;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)calculateTextureClipBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 andOffset:(struct CGPoint { double x0; double x1; } *)a1 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a2 andRectOnCanvas:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 textureDescription:(id)a4 isUsingImageTexture:(char)a5;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(char)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(char)a3 forAlphaOnly:(char)a4 drawChildren:(char)a5 keepingChildrenPassingTest:(id /* block */)a6;
- (struct CGImage { } *)newTextureMaskImageForViewScale:(double)a0 includeFrameMask:(char)a1 maskRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)newVideoBackgroundFillTextureWithClipBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 offset:(struct CGPoint { double x0; double x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_antialiasingDefeatedRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_antialiasingDefeatedVideoMaskBoundsInContext:(struct CGContext { } *)a0;
- (void)p_drawBackgroundFillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)p_drawInContext:(struct CGContext { } *)a0 withContent:(char)a1 withStroke:(char)a2 opacity:(double)a3 withMask:(char)a4 forShadowOrHitTest:(char)a5;
- (void)p_drawOffStateRepresentationInContext:(struct CGContext { } *)a0 forShadowOrHitTest:(char)a1;
- (void)p_drawPosterImageWithProvider:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)p_drawShadowOrHitTestImageInContext:(struct CGContext { } *)a0;
- (void)p_drawSymbolInContext:(struct CGContext { } *)a0;
- (id)p_effectiveColorSet;
- (char)p_hasBackgroundFill;
- (id)p_posterImageProvider;
- (char)p_shouldRenderFrameStroke;
- (char)p_shouldRenderStroke:(id)a0;
- (char)p_shouldUseImageTexture;
- (void)p_updateFrameRep;
- (id)textureForDescription:(id)a0;

@end
