@protocol _UXWindowDelegate;

@interface _UXWindow : NSWindow

@property (weak) id<_UXWindowDelegate> delegate;

- (void)cancelOperation:(id)a0;
- (void)dealloc;
- (id)_getActiveUndoManager;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)makeFirstResponder:(id)a0;
- (void)recalculateKeyViewLoop;

@end
