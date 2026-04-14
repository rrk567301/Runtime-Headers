@interface _VFXSnapshotWindow : NSWindow

- (BOOL)canBecomeKeyWindow;
- (BOOL)isVisible;
- (id)screen;
- (BOOL)_visibleAndCanBecomeKeyLimitedOK:(BOOL)a0;
- (BOOL)isKeyWindow;
- (BOOL)isMainWindow;
- (unsigned long long)occlusionState;

@end
