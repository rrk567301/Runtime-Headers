@protocol MTLTexture;

@interface PTTextureRGBA : PTTexture {
    unsigned long long _imageblockSize;
}

@property (retain) id<MTLTexture> texRGBA;

- (unsigned long long)width;
- (unsigned long long)height;
- (void).cxx_destruct;
- (id)initWithTexture:(id)a0;
- (BOOL)isRGB;
- (id)asRGBA;
- (unsigned long long)imageBlockSize;

@end
