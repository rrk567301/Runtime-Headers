@class AVWeakReference;

@interface AVCaptureVisibilityHelperLayer : CALayer {
    AVWeakReference *_delegate;
}

- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;

@end
