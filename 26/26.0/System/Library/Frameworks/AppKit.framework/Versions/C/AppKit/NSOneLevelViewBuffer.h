@class NSWindow;

@interface NSOneLevelViewBuffer : NSViewBuffer {
    NSWindow *_window;
    struct CGLayer { } *_cgLayer;
}

- (void)dealloc;
- (id)initWithView:(id)a0;
- (void)invalidate;
- (BOOL)restore;
- (BOOL)cacheRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
