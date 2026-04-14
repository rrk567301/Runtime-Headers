@interface QCFullScreenWindow : NSWindow {
    unsigned int _displayID;
}

- (BOOL)canBecomeKeyWindow;
- (unsigned int)displayID;
- (void)sendEvent:(id)a0;
- (id)initWithScreen:(id)a0;
- (BOOL)canBecomeMainWindow;

@end
