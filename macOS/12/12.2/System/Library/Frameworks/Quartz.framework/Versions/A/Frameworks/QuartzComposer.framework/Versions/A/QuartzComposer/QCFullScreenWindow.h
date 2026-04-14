@interface QCFullScreenWindow : NSWindow {
    unsigned int _displayID;
}

- (unsigned int)displayID;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)sendEvent:(id)a0;
- (id)initWithScreen:(id)a0;

@end
