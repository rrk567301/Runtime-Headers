@class NSWindow;

@interface _NSFullScreenTileWindowProxyLayer : CALayer {
    unsigned int _wid;
    NSWindow *_window;
}

- (unsigned int)windowID;
- (id)window;
- (void)dealloc;
- (id)copyWithSameContents;
- (id)initWithWindowID:(unsigned int)a0;

@end
