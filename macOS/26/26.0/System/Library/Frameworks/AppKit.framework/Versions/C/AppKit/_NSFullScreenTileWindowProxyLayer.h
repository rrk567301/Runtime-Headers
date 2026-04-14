@class NSWindow;

@interface _NSFullScreenTileWindowProxyLayer : CALayer {
    unsigned int _wid;
    NSWindow *_window;
}

- (id)window;
- (void)dealloc;
- (unsigned int)windowID;
- (id)copyWithSameContents;
- (id)initWithWindowID:(unsigned int)a0;

@end
