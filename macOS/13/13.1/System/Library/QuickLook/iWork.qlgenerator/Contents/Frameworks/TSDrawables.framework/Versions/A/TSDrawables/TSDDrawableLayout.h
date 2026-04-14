@class TSDLayoutGeometry, NSString, TSDWrapSegments, TSUBezierPath;

@interface TSDDrawableLayout : TSDLayout <TSDWrappable> {
    TSUBezierPath *mCachedWrapPath;
    TSDWrapSegments *mCachedWrapSegments;
    TSUBezierPath *mCachedPathForClippingConnectionLines;
    TSUBezierPath *mCachedExteriorWrapPath;
}

@property (readonly, nonatomic) BOOL hasAlpha;
@property (copy, nonatomic) TSDLayoutGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (int)wrapType;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (id)wrapPath;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInfluencingExteriorWrap;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInRoot;
- (BOOL)isHTMLWrap;
- (int)wrapDirection;
- (int)wrapFitType;
- (void)processChangedProperty:(int)a0;
- (void)parentDidChange;
- (id)i_computeWrapPathClosed:(BOOL)a0;
- (id)i_computeWrapPath;
- (id)i_wrapPath;
- (void)invalidateExteriorWrap;
- (BOOL)allowsConnections;
- (void)i_invalidateWrap;
- (void)invalidateParentForWrap;
- (id)visibleGeometries;
- (id)pathForClippingConnectionLines;
- (id)wrapSegments;
- (id)i_wrapPathIncludingTitleAndCaption;
- (id)p_exteriorTextWrapPath;
- (void)invalidateInRootGeometry;
- (void)inRootGeometryChangedBy:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)p_addVisibleGeometriesFromInfo:(id)a0 intoArray:(id)a1 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;

@end
