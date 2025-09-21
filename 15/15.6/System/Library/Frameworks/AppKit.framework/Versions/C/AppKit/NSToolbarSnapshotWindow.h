@interface NSToolbarSnapshotWindow : NSWindow {
    char _active;
}

@property char active;

+ (char)_hiddenInWindowList;

- (id)init;
- (char)_hasActiveAppearance;
- (char)_hasActiveAppearanceIgnoringKeyFocus;
- (char)_hasActiveControls;
- (char)_shouldForceRolloverStylingForControl:(id)a0;
- (char)canBecomeKeyWindow;
- (char)hasKeyAppearance;
- (char)hasMainAppearance;
- (char)isKeyWindow;

@end
