@protocol MTLTexture;

@interface PTTextureYUV : PTTexture {
    unsigned long long _imageblockSize;
}

@property (retain) id<MTLTexture> texLuma;
@property (retain) id<MTLTexture> texChroma;

- (void).cxx_destruct;
- (unsigned long long)height;
- (unsigned long long)width;
- (BOOL)isRGB;
- (id)asYUV;
- (unsigned long long)imageBlockSize;
- (id)initWithLumaTexture:(id)a0 chromaTexture:(id)a1;

@end
