@class NSToolbarFlexibleSpaceItem;

@interface _NSToolbarFlexibleSpace : NSView {
    char _inPalette;
}

@property char inPalette;
@property (weak) NSToolbarFlexibleSpaceItem *spaceItem;
@property unsigned long long controlSize;

- (void).cxx_destruct;
- (char)_shouldDrawFlexibleSpaceOutline;
- (Class)_classToCheckForWantsUpdateLayer;
- (struct __CFString { } *)_currentCoreUIWidget;
- (void)_drawToolbarFlexibleSpaceInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)_drawsNothing;
- (char)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)ignoreHitTest;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 forSpaceItem:(id)a1;
- (char)preservesContentDuringLiveResize;
- (void)updateLayer;

@end
