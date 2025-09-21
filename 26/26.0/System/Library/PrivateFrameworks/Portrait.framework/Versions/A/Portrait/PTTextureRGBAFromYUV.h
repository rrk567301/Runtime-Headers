@class PTTextureYUV;

@interface PTTextureRGBAFromYUV : PTTextureRGBA

@property (retain) PTTextureYUV *textureAsYUV;

- (void).cxx_destruct;
- (id)initWithTexture:(id)a0;
- (id)asRGBA;
- (id)asRGBAFromYUV;
- (id)asYUV;

@end
