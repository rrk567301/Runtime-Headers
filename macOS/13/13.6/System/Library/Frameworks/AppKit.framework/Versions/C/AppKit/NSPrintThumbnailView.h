@class NSShadow, NSImage, NSPrintOperation;

@interface NSPrintThumbnailView : NSView {
    NSPrintOperation *_operation;
    NSShadow *_paperShadow;
    NSImage *_cachedImage;
    long long _basePageNumber;
}

- (void)dealloc;
- (void)setOperation:(id)a0;
- (BOOL)_hasPagesBorder;
- (unsigned short)_pagesDirection;
- (double)heightForWidth:(double)a0;
- (double)widthForHeight:(double)a0;
- (void)_drawBorderOfType:(unsigned short)a0 withScaleFactor:(double)a1;
- (BOOL)_mirrorHorizontal;
- (long long)_pageOffsetForRow:(long long)a0 column:(long long)a1;
- (unsigned short)_pagesBorderType;
- (struct CGSize { double x0; double x1; })_pagesLayout;
- (double)_paperAspectRatio;
- (id)_paperShadow;
- (struct CGSize { double x0; double x1; })_paperSize;
- (BOOL)_reversePageOrientation;
- (long long)basePageNumber;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateContents;
- (void)setBasePageNumber:(long long)a0;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToWindow;

@end
