@class NSGradient, NSImage, NSTableView, NSColor;

@interface NSTableBackgroundView : NSView {
    NSColor *_firstAlternatingColor;
    struct CGSize { double width; double height; } _cachedSize;
    char _isOpaque;
}

@property (retain) NSImage *backgroundImage;
@property NSTableView *tableView;
@property (retain) NSColor *firstAlternatingColor;
@property (retain) NSColor *secondAlternatingColor;
@property (getter=isOpaque) char opaque;
@property (retain) NSGradient *gradient;
@property long long rubberBandArea;
@property char shouldDrawVerticalGrid;

+ (char)clipsToBounds;
+ (id)defaultAnimationForKey:(id)a0;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)_callPublicDrawBackground:(char)a0 drawGrid:(char)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_drawAlternatingBackgroundAndGridInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawBackgroundRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rowCount:(unsigned long long)a1 rowHeight:(double)a2 rowInset:(double)a3 cornerRadius:(double)a4;
- (void)_drawGradientBackground;
- (void)_drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inTableCoordsWithHandler:(id /* block */)a1;
- (void)_drawVerticalGridInDirtyRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_preferredAppearance;
- (void)_setTrackingAreasDirty:(unsigned long long)a0;
- (long long)_trackingAreasDirty;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setLayer:(id)a0;
- (void)setOpaque:(char)a0;

@end
