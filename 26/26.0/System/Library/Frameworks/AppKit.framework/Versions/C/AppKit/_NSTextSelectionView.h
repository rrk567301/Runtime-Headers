@class NSColor, NSTextView, NSHashTable;

@interface _NSTextSelectionView : NSView {
    NSTextView *_textView;
    NSHashTable *_tiles;
}

@property (readonly, getter=isPlaceholderRendered) BOOL placeholderRendered;
@property (readonly) NSColor *_selectionBackgroundColor;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)isFlipped;
- (id)initWithTextView:(id)a0;
- (void)addSelectionTileViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)autoresizingMask;
- (void)removeAllSelectionTiles;
- (void)renewGState;
- (BOOL)shouldBeArchived;

@end
