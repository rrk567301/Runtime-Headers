@protocol MTLTexture;

@interface PTTextureYUV : PTTexture {
    unsigned long long _imageblockSize;
}

@property (retain) id<MTLTexture> texLuma;
@property (retain) id<MTLTexture> texChroma;

- (unsigned long long)width;
- (unsigned long long)height;
- (void).cxx_destruct;
- (BOOL)isRGB;
- (id)asYUV;
- (unsigned long long)imageBlockSize;
- (id)initWithLumaTexture:(id)a0 chromaTexture:(id)a1;

@end
