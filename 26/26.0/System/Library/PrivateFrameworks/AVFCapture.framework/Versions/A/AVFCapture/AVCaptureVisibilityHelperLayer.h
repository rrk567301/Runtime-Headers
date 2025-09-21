@class AVWeakReference;

@interface AVCaptureVisibilityHelperLayer : CALayer {
    AVWeakReference *_delegate;
}

- (void)dealloc;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)initWithDelegate:(id)a0;

@end
