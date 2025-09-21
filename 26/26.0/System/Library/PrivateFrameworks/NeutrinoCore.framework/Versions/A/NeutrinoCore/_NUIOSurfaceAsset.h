@class IOSurface;

@interface _NUIOSurfaceAsset : _NUCIImageAsset

@property (readonly, nonatomic) IOSurface *surface;

- (void).cxx_destruct;
- (id)initWithCIImage:(id)a0 type:(long long)a1 identifier:(id)a2;
- (id)initWithIOSurface:(id)a0 type:(long long)a1 identifier:(id)a2;

@end
