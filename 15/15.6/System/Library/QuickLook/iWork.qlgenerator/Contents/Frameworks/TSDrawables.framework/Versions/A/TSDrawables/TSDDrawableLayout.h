@class TSDLayoutGeometry, NSString, TSDWrapSegments, TSUBezierPath;

@interface TSDDrawableLayout : TSDLayout <TSDWrappable> {
    TSUBezierPath *mCachedWrapPath;
    TSDWrapSegments *mCachedWrapSegments;
    TSUBezierPath *mCachedPathForClippingConnectionLines;
    TSUBezierPath *mCachedExteriorWrapPath;
}

@property (readonly, nonatomic) char hasAlpha;
@property (copy, nonatomic) TSDLayoutGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (int)wrapType;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (id)wrapPath;
- (void)parentDidChange;
- (char)allowsConnections;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInRoot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInfluencingExteriorWrap;
- (id)i_computeWrapPath;
- (id)i_computeWrapPathClosed:(char)a0;
- (void)i_invalidateWrap;
- (id)i_wrapPath;
- (void)invalidateExteriorWrap;
- (void)invalidateParentForWrap;
- (char)isHTMLWrap;
- (void)processChangedProperty:(int)a0;
- (int)wrapDirection;
- (int)wrapFitType;
- (id)visibleGeometries;
- (id)pathForClippingConnectionLines;
- (id)wrapSegments;
- (id)i_wrapPathIncludingTitleAndCaption;
- (void)inRootGeometryChangedBy:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)invalidateInRootGeometry;
- (void)p_addVisibleGeometriesFromInfo:(id)a0 intoArray:(id)a1 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)p_exteriorTextWrapPath;

@end
