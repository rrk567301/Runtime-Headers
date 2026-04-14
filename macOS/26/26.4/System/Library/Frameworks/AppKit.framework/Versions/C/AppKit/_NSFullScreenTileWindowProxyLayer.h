@class NSWindow;

@interface _NSFullScreenTileWindowProxyLayer : CALayer {
    unsigned int _wid;
    NSWindow *_window;
}

- (id)window;
- (unsigned int)windowID;
- (void)dealloc;
- (id)copyWithSameContents;
- (id)initWithWindowID:(unsigned int)a0;

@end
