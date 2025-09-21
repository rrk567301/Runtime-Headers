@interface TNPrintProperties : NSObject

@property struct CGSize { double width; double height; } unscaledPageSize;
@property struct NSEdgeInsets { double top; double left; double bottom; double right; } printMargins;
@property (readonly) double pageHeight;
@property (readonly) double pageWidth;
@property (nonatomic) double headerInset;
@property (nonatomic) double footerInset;

+ (id)a4SizePrintProperties;
+ (id)legacyExportPrintProperties;
+ (id)letterSizeLandscapeFormPrintProperties;
+ (id)letterSizePortraitFormPrintProperties;
+ (id)letterSizePrintProperties;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForContentScale:(double)a0 portraitOrientation:(char)a1 headerHeight:(double)a2 footerHeight:(double)a3;
- (double)contentScaleForIntegralWidthWithContentScale:(double)a0 portraitOrientation:(char)a1;
- (id)initWithPageSize:(struct CGSize { double x0; double x1; })a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithPageSize:(struct CGSize { double x0; double x1; })a0 printMargins:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)initWithPageSize:(struct CGSize { double x0; double x1; })a0 printMargins:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1 headerInset:(double)a2 footerInset:(double)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_transformForContentScale:(double)a0 portraitOrientation:(char)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_unscaledContentRectForOrientation:(char)a0 headerHeight:(double)a1 footerHeight:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageHeaderFooterRectForContentScale:(double)a0 portraitOrientation:(char)a1 footer:(char)a2 textHeight:(double)a3;
- (struct CGSize { double x0; double x1; })pageSizeForContentScale:(double)a0 portraitOrientation:(char)a1;
- (struct CGSize { double x0; double x1; })pageSizeWithGutterForContentScale:(double)a0 userViewScale:(double)a1 portraitOrientation:(char)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unscaledPageRectForDisplayForPortraitOrientation:(char)a0 userViewScale:(double)a1 atPageCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })a2 layoutLeftToRight:(char)a3;

@end
