@protocol MTLTexture;

@interface CAStereoMetalTexture : NSObject

@property (readonly) id<MTLTexture> textureArray;
@property (readonly) struct CGColorSpace { } *colorSpace;

+ (id)stereoMetalTextureWithMTLTextureArray:(id)a0 colorSpace:(struct CGColorSpace { } *)a1;

- (void)dealloc;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;

@end
