@class NSShadow, NSImage, NSPrintOperation;

@interface NSPrintThumbnailView : NSView {
    NSPrintOperation *_operation;
    NSShadow *_paperShadow;
    NSImage *_cachedImage;
    long long _basePageNumber;
}

- (void)dealloc;
- (void)setOperation:(id)a0;
- (void)viewDidMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeBackingProperties;
- (struct CGSize { double x0; double x1; })_paperSize;
- (void)setBasePageNumber:(long long)a0;
- (long long)basePageNumber;
- (struct CGSize { double x0; double x1; })_pagesLayout;
- (unsigned short)_pagesDirection;
- (BOOL)_hasPagesBorder;
- (unsigned short)_pagesBorderType;
- (BOOL)_mirrorHorizontal;
- (BOOL)_reversePageOrientation;
- (id)_paperShadow;
- (double)_paperAspectRatio;
- (double)widthForHeight:(double)a0;
- (double)heightForWidth:(double)a0;
- (void)invalidateContents;
- (long long)_pageOffsetForRow:(long long)a0 column:(long long)a1;
- (void)_drawBorderOfType:(unsigned short)a0 withScaleFactor:(double)a1;

@end
