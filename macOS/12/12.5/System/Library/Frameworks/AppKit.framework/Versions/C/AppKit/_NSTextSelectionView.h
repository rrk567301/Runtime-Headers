@class NSColor, NSTextView, NSHashTable;

@interface _NSTextSelectionView : NSView {
    NSTextView *_textView;
    NSHashTable *_tiles;
}

@property (readonly, getter=isPlaceholderRendered) BOOL placeholderRendered;
@property (readonly) NSColor *_selectionBackgroundColor;

- (void)dealloc;
- (BOOL)isFlipped;
- (unsigned long long)autoresizingMask;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldBeArchived;
- (id)initWithTextView:(id)a0;
- (void)removeAllSelectionTiles;
- (void)addSelectionTileViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
