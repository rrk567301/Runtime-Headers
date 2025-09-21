@interface NSToolbarSnapshotWindow : NSWindow {
    BOOL _active;
}

@property BOOL active;

+ (BOOL)_hiddenInWindowList;

- (id)init;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_hasActiveAppearance;
- (BOOL)_hasActiveAppearanceIgnoringKeyFocus;
- (BOOL)_hasActiveControls;
- (BOOL)_shouldForceRolloverStylingForControl:(id)a0;
- (BOOL)hasKeyAppearance;
- (BOOL)hasMainAppearance;
- (BOOL)isKeyWindow;

@end
