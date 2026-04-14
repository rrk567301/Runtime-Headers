@protocol INUICKPSynchronousRemoteViewDelegate;

@interface INUICKPSynchronousRemoteView : NSView

@property (weak, nonatomic) id<INUICKPSynchronousRemoteViewDelegate> delegate;

- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
