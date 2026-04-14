@interface QCFullScreenWindow : NSWindow {
    unsigned int _displayID;
}

- (unsigned int)displayID;
- (void)sendEvent:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (id)initWithScreen:(id)a0;
- (BOOL)canBecomeMainWindow;

@end
