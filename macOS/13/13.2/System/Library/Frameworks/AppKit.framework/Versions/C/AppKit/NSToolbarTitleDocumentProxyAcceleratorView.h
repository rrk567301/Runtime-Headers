@class NSThemeDocumentButton;

@interface NSToolbarTitleDocumentProxyAcceleratorView : NSView

@property (weak) NSThemeDocumentButton *representedDocumentButton;
@property BOOL requiresDelay;
@property BOOL extendsRegionToIncludeTitle;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;

@end
