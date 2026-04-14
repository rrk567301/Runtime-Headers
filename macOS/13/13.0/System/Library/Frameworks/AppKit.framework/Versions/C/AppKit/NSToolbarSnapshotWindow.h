@interface NSToolbarSnapshotWindow : NSWindow {
    BOOL _active;
}

@property BOOL active;

+ (BOOL)_hiddenInWindowList;
+ (id)newSnapshotWindow;

- (BOOL)_hasActiveAppearance;
- (BOOL)isKeyWindow;
- (BOOL)hasKeyAppearance;
- (BOOL)_hasActiveControls;
- (BOOL)_hasActiveAppearanceIgnoringKeyFocus;
- (BOOL)_shouldForceRolloverStylingForControl:(id)a0;
- (BOOL)hasMainAppearance;

@end
