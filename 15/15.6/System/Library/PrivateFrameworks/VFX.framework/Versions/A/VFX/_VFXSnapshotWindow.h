@interface _VFXSnapshotWindow : NSWindow

- (char)_visibleAndCanBecomeKeyLimitedOK:(char)a0;
- (char)canBecomeKeyWindow;
- (char)isKeyWindow;
- (char)isMainWindow;
- (char)isVisible;
- (unsigned long long)occlusionState;
- (id)screen;

@end
