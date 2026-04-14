@interface NSToolbarSnapshotWindow : NSWindow {
    BOOL _active;
}

@property BOOL active;

- (BOOL)_hasActiveAppearance;
- (BOOL)isKeyWindow;
- (BOOL)hasKeyAppearance;
- (BOOL)_shouldForceRolloverStylingForControl:(id)a0;
- (BOOL)_hasActiveControls;
- (BOOL)_hasActiveAppearanceIgnoringKeyFocus;
- (BOOL)hasMainAppearance;

@end
