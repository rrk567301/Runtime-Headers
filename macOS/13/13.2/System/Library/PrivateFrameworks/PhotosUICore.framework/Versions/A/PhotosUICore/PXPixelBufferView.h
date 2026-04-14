@interface PXPixelBufferView : UXView

+ (Class)layerClass;

- (void)didMoveToWindow;
- (void)enqueuePixelBuffer:(struct __CVBuffer { } *)a0;
- (id)imageQueueLayer;

@end
