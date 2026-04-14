@class NSToolbarFlexibleSpaceItem;

@interface _NSToolbarFlexibleSpace : NSView {
    BOOL _inPalette;
}

@property BOOL inPalette;
@property NSToolbarFlexibleSpaceItem *spaceItem;
@property unsigned long long controlSize;

- (BOOL)allowsVibrancy;
- (void)updateLayer;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (Class)_classToCheckForWantsUpdateLayer;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)preservesContentDuringLiveResize;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 forSpaceItem:(id)a1;
- (BOOL)_drawsNothing;
- (struct __CFString { } *)_currentCoreUIWidget;
- (void)_drawToolbarFlexibleSpaceInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldDrawFlexibleSpaceOutline;

@end
