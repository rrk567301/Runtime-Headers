@class _NSOverlayBackgroundView;

@interface NSTouchBarCustomizationPaletteInactiveDisplayOverlayWindow : NSWindow {
    _NSOverlayBackgroundView *_backgroundView;
}

- (id)initWithScreen:(id)a0;
- (BOOL)_wantsSnapshotProxyWindowForOrderOutAnimation;
- (BOOL)_isNonactivatingPanel;
- (void)animateIn;
- (void)animateOut;

@end
