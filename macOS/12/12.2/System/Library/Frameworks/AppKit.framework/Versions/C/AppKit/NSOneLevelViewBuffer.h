@class NSWindow;

@interface NSOneLevelViewBuffer : NSViewBuffer {
    NSWindow *_window;
    struct CGLayer { } *_cgLayer;
}

- (void)dealloc;
- (void)invalidate;
- (id)initWithView:(id)a0;
- (BOOL)cacheRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)restore;

@end
