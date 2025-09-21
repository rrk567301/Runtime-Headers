@class NSData, NSString;

@interface GLKTexture : NSObject {
    struct CGImageBlockSet { } *_blockSet;
    struct __CFData { } *_cfData;
    int _unpackAlignment;
    char _requestIssuedForAlphaPremultiplication;
    char _requestIssuedToReorientToGL;
    char _requestIssuedForSRGB;
    unsigned int _primarySurfaceLength;
}

@property (readonly) NSData *imageData;
@property (nonatomic) unsigned int GLTextureName;
@property (nonatomic) unsigned int bindTarget;
@property (nonatomic) unsigned int textureTarget;
@property (nonatomic) unsigned int internalFormat;
@property (nonatomic) unsigned int format;
@property (nonatomic) unsigned int type;
@property (nonatomic) int texelFormat;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) unsigned int numMipMapLevels;
@property (nonatomic) unsigned int bitsPerPixel;
@property (nonatomic) unsigned int rowBytes;
@property (nonatomic) unsigned int nComponents;
@property (nonatomic) unsigned int nPrimarySurfaces;
@property (nonatomic) unsigned int nSurfaces;
@property (nonatomic) int loadMode;
@property (nonatomic) int dataCategory;
@property (nonatomic) unsigned int index;
@property (readonly) char requestIssuedForMipmapGeneration;
@property (readonly) char hasPremultipliedAlpha;
@property (nonatomic) char isPowerOfTwo;
@property (nonatomic) char isCubeMap;
@property (nonatomic) char isMipmapped;
@property (nonatomic) char isVerticalFlipped;
@property (nonatomic) char hasAlpha;
@property (nonatomic) char reOrient;
@property (copy, nonatomic) NSString *label;

- (void)dealloc;
- (id)init;
- (char)_uploadToGLTexture:(unsigned int)a0 data:(id)a1 width:(int)a2 height:(int)a3 dataCategory:(int)a4 cubeMapIndex:(int)a5 mipMapIndex:(int)a6 error:(id *)a7;
- (void *)alignmentFix:(unsigned int)a0 data:(const void *)a1;
- (char)canHonorSRGBrequest;
- (char)decodeCGImage:(struct CGImage { } *)a0;
- (char)decodeCGImageDataProvider:(struct CGImage { } *)a0;
- (char)decodeCGImageImageProvider:(struct CGImage { } *)a0 CGImageProvider:(struct CGImageProvider { } *)a1;
- (char)determineCGImageBlockFormatWithComponentType:(int)a0 alphaInfo:(unsigned int)a1 andPixelSize:(unsigned long long)a2 andColorModel:(int)a3 isOptimized:(char)a4;
- (char)determinePVRFormat:(unsigned int)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 forceCubeMap:(char)a1 wasCubeMap:(char *)a2 cubeMapIndex:(int)a3 options:(id)a4 error:(id *)a5;
- (id)initWithData:(id)a0 forceCubeMap:(char)a1 wasCubeMap:(char *)a2 cubeMapIndex:(int)a3 options:(id)a4 error:(id *)a5;
- (id)initWithDecodedData:(id)a0 width:(unsigned int)a1 height:(unsigned int)a2 rowBytes:(unsigned int)a3 texture:(id)a4 cubeMapIndex:(int)a5 options:(id)a6 error:(id *)a7;
- (char)loadCGImage:(struct CGImage { } *)a0 options:(id)a1 error:(id *)a2;
- (char)loadPVRTCData:(id)a0 error:(id *)a1;
- (char)loadWithData:(id)a0 options:(id)a1 error:(id *)a2;
- (char)premultiplyWithAlpha:(void *)a0 source:(void *)a1 withWidth:(unsigned int)a2 withHeight:(unsigned int)a3 withRowBytes:(unsigned int)a4 error:(id *)a5;
- (char)reorientToGL:(void *)a0 source:(void *)a1 withWidth:(unsigned int)a2 withHeight:(unsigned int)a3 withRowBytes:(unsigned int)a4 error:(id *)a5;
- (char)shouldApplyPremultiplication;
- (char)shouldApplyReorientToGL;
- (void)updateRequestedOperationsFromOptions:(id)a0;
- (char)uploadToGLTexture:(unsigned int)a0 error:(id *)a1;

@end
