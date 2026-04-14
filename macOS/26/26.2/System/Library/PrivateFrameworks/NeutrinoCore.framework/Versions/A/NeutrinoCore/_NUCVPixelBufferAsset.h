@interface _NUCVPixelBufferAsset : _NUCIImageAsset

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;

- (void)dealloc;
- (id)initWithCIImage:(id)a0 type:(long long)a1 identifier:(id)a2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 type:(long long)a1 identifier:(id)a2;

@end
