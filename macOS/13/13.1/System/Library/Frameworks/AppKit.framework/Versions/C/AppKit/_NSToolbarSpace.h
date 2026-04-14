@class NSToolbarSpaceItem;

@interface _NSToolbarSpace : NSView {
    BOOL _inPalette;
}

@property BOOL inPalette;
@property NSToolbarSpaceItem *spaceItem;
@property unsigned long long controlSize;

- (BOOL)allowsVibrancy;
- (void)updateLayer;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (Class)_classToCheckForWantsUpdateLayer;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)preservesContentDuringLiveResize;
- (void)mouseUp:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 forSpaceItem:(id)a1;
- (BOOL)_drawsNothing;
- (struct __CFString { } *)_currentCoreUIWidget;
- (BOOL)isSpaceItem;
- (void)_drawToolbarSpaceInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldDrawSpace;

@end
