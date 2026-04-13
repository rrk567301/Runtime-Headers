@class _NSOverlayBackgroundView;

@interface NSTouchBarCustomizationPaletteInactiveDisplayOverlayWindow : NSWindow {
    _NSOverlayBackgroundView *_backgroundView;
}

- (BOOL)_isNonactivatingPanel;
- (id)initWithScreen:(id)a0;
- (BOOL)_wantsSnapshotProxyWindowForOrderOutAnimation;
- (void)animateIn;
- (void)animateOut;

@end
