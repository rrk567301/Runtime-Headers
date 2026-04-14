@interface QCFullScreenWindow : NSWindow {
    unsigned int _displayID;
}

- (void)sendEvent:(id)a0;
- (unsigned int)displayID;
- (BOOL)canBecomeKeyWindow;
- (id)initWithScreen:(id)a0;
- (BOOL)canBecomeMainWindow;

@end
