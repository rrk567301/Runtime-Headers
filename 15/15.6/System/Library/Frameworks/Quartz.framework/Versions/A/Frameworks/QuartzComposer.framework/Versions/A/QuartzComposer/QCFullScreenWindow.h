@interface QCFullScreenWindow : NSWindow {
    unsigned int _displayID;
}

- (unsigned int)displayID;
- (id)initWithScreen:(id)a0;
- (char)canBecomeKeyWindow;
- (char)canBecomeMainWindow;
- (void)sendEvent:(id)a0;

@end
