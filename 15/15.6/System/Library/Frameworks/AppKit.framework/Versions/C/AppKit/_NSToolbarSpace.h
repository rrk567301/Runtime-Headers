@class NSToolbarSpaceItem;

@interface _NSToolbarSpace : NSView {
    char _inPalette;
}

@property char inPalette;
@property (weak) NSToolbarSpaceItem *spaceItem;
@property unsigned long long controlSize;

- (void).cxx_destruct;
- (Class)_classToCheckForWantsUpdateLayer;
- (struct __CFString { } *)_currentCoreUIWidget;
- (void)_drawToolbarSpaceInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)_drawsNothing;
- (char)_shouldDrawSpace;
- (char)acceptsFirstMouse:(id)a0;
- (char)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)ignoreHitTest;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 forSpaceItem:(id)a1;
- (char)isSpaceItem;
- (char)preservesContentDuringLiveResize;
- (void)updateLayer;

@end
