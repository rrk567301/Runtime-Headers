@class NSCell;

@interface ILMediaBrowserTableCornerView : NSView {
    NSCell *_drawCell;
}

@property (nonatomic) Class tableHeaderCellClass;

- (void)dealloc;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)enclosingScrollView;
- (BOOL)_drawingEndSeparator;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fillRect;

@end
