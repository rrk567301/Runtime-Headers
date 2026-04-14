@interface PXImageQueueLayer : CALayer {
    struct _CAImageQueue { } *_imageQueue;
    struct __CVBuffer { } *_pixelBuffer;
    unsigned long long _pixelBufferId;
}

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;

- (void)_commonInit;
- (id)initWithLayer:(id)a0;
- (void)dealloc;
- (void)display;
- (id)init;

@end
