@protocol MTLTexture;

@interface PTTextureRGBA : PTTexture {
    unsigned long long _imageblockSize;
}

@property (retain) id<MTLTexture> texRGBA;

- (void).cxx_destruct;
- (unsigned long long)height;
- (unsigned long long)width;
- (id)initWithTexture:(id)a0;
- (BOOL)isRGB;
- (id)asRGBA;
- (unsigned long long)imageBlockSize;

@end
