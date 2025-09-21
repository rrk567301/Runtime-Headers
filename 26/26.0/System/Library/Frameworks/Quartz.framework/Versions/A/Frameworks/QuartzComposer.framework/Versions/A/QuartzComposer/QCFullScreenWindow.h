@interface QCFullScreenWindow : NSWindow {
    unsigned int _displayID;
}

- (void)sendEvent:(id)a0;
- (id)initWithScreen:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (unsigned int)displayID;
- (BOOL)canBecomeMainWindow;

@end
