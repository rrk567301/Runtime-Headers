@class NSThemeDocumentButton;

@interface NSToolbarTitleDocumentProxyAcceleratorView : NSView

@property (weak) NSThemeDocumentButton *representedDocumentButton;
@property char requiresDelay;
@property char extendsRegionToIncludeTitle;

- (void).cxx_destruct;
- (char)acceptsFirstMouse:(id)a0;
- (void)mouseDown:(id)a0;
- (char)mouseDownCanMoveWindow;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (char)shouldDelayWindowOrderingForEvent:(id)a0;

@end
