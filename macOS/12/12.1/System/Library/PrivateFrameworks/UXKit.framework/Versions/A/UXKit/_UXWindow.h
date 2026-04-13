@protocol _UXWindowDelegate;

@interface _UXWindow : NSWindow

@property (weak) id<_UXWindowDelegate> delegate;

- (void)dealloc;
- (void)beginCriticalSheet:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginSheet:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)makeFirstResponder:(id)a0;
- (void)cancelOperation:(id)a0;
- (void)recalculateKeyViewLoop;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;

@end
