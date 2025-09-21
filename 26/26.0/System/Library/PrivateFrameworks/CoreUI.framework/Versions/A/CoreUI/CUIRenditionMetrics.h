@interface CUIRenditionMetrics : NSObject <NSCopying> {
    struct CGSize { double width; double height; } _imageSize;
    struct CGSize { double width; double height; } _defaultImageSize;
    struct CGSize { double width; double height; } _edgeBottomLeftMargin;
    struct CGSize { double width; double height; } _edgeTopRightMargin;
    struct CGSize { double width; double height; } _contentBottomLeftMargin;
    struct CGSize { double width; double height; } _contentTopRightMargin;
    double _baseline;
    struct CGSize { double width; double height; } _auxiliary1BottomLeftMargin;
    struct CGSize { double width; double height; } _auxiliary1TopRightMargin;
    struct CGSize { double width; double height; } _auxiliary2BottomLeftMargin;
    struct CGSize { double width; double height; } _auxiliary2TopRightMargin;
    double _scale;
    struct crmFlags { unsigned char scalesVertically : 1; unsigned char scalesHorizontally : 1; unsigned short reserved : 14; } _crmFlags;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (struct CGSize { double x0; double x1; })contentTopRightMargin;
- (id)metricsByMirroringHorizontally;
- (double)scale;
- (struct CGSize { double x0; double x1; })edgeBottomLeftMargin;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })defaultImageSize;
- (double)baseline;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })edgeRect;
- (struct CGSize { double x0; double x1; })auxiliary1BottomLeftMargin;
- (struct CGSize { double x0; double x1; })auxiliary2TopRightMargin;
- (struct CGSize { double x0; double x1; })contentBottomLeftMargin;
- (struct CGSize { double x0; double x1; })imageSize;
- (BOOL)scalesVertically;
- (BOOL)scalesHorizontally;
- (struct CGSize { double x0; double x1; })auxiliary1TopRightMargin;
- (struct CGSize { double x0; double x1; })edgeTopRightMargin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })insetRectWithMetrics:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })auxiliary2BottomLeftMargin;
- (BOOL)hasAlignmentEdgeMargins;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })insetContentRectWithMetrics:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasOpaqueContentBounds;

@end
