@class NSWindow;

@interface _NSFullScreenTileWindowProxyLayer : CALayer {
    unsigned int _wid;
    NSWindow *_window;
}

- (void)dealloc;
- (id)window;
- (unsigned int)windowID;
- (id)initWithWindowID:(unsigned int)a0;
- (id)copyWithSameContents;

@end
