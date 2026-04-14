@interface _NUCGImageAsset : _NUCIImageAsset

@property (readonly, nonatomic) struct CGImage { } *cgImage;

- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0 type:(long long)a1 identifier:(id)a2;
- (id)initWithCIImage:(id)a0 type:(long long)a1 identifier:(id)a2;

@end
