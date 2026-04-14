@protocol SHKClientWindowSyncDelegate;

@interface SHKBackgroundView : NSView

@property (weak) id<SHKClientWindowSyncDelegate> delegate;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;

@end
