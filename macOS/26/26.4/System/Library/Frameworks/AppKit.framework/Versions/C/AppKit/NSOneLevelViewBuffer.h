@class NSWindow;

@interface NSOneLevelViewBuffer : NSViewBuffer {
    NSWindow *_window;
    struct CGLayer { } *_cgLayer;
}

- (id)initWithView:(id)a0;
- (BOOL)restore;
- (void)invalidate;
- (void)dealloc;
- (BOOL)cacheRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
