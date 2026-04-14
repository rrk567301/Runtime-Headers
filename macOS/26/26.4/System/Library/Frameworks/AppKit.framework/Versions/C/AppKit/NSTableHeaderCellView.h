@class NSCell, NSTableHeaderView;

@interface NSTableHeaderCellView : NSView

@property (retain) NSCell *cell;
@property (getter=isSelected) BOOL selected;
@property NSTableHeaderView *tableHeaderView;

- (id)menuForEvent:(id)a0;
- (void)_commonInit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;

@end
