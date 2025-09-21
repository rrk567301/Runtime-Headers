@interface _VFXSnapshotWindow : NSWindow

- (id)screen;
- (BOOL)isVisible;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_visibleAndCanBecomeKeyLimitedOK:(BOOL)a0;
- (BOOL)isKeyWindow;
- (BOOL)isMainWindow;
- (unsigned long long)occlusionState;

@end
