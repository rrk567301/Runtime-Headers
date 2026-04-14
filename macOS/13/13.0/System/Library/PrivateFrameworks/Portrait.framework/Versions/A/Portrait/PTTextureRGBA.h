@protocol MTLTexture;

@interface PTTextureRGBA : PTTexture

@property (retain) id<MTLTexture> texRGBA;

- (void).cxx_destruct;
- (unsigned long long)width;
- (unsigned long long)height;

@end
