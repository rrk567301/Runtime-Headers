@class NSIndexSet, PXGMetalTextureCache, NSString, PXGColorProgram;
@protocol MTLTexture;

@interface PXGMetalImageTexture : PXGImageTexture <PXGMetalSpriteTexture> {
    char _isContentOpaque;
    void /* unknown type, empty encoding */ _orientationTransform;
}

@property (weak, nonatomic) PXGMetalTextureCache *textureCache;
@property (readonly, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) id<MTLTexture> chromaTexture;
@property (readonly, nonatomic) PXGColorProgram *colorProgram;
@property (nonatomic) long long renderPipelineIndex;
@property (readonly, nonatomic) char isAtlas;
@property (readonly, nonatomic) char isCaptureTexture;
@property (readonly, nonatomic) int shaderFlags;
@property (readonly, nonatomic) float alpha;
@property (readonly, nonatomic) unsigned int spriteCount;
@property (readonly, nonatomic) NSIndexSet *spriteIndexes;
@property (readonly, nonatomic) char hasSprites;
@property (readonly, nonatomic) long long estimatedByteSize;
@property (readonly, nonatomic) unsigned char presentationType;
@property (readonly, nonatomic) struct CGImage { } *imageRepresentation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly, nonatomic) char isOpaque;
@property (readonly, nonatomic) char isDegraded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void /* unknown type, empty encoding */)orientationTransform;
- (void)cleanupAfterRender:(long long)a0;
- (id)copyWithOrientationTransform:(SEL)a0 alpha:(float)a1;
- (id)initWithTexture:(SEL)a0 chromaTexture:(id)a1 colorProgram:(id)a2 isOpaque:(id)a3 shaderFlags:(char)a4 orientationTransform:(int)a5 alpha:(float)a6 presentationType:(unsigned char)a7;
- (id)initWithTexture:(SEL)a0 colorProgram:(id)a1 isOpaque:(id)a2 shaderFlags:(char)a3 orientationTransform:(int)a4 alpha:(float)a5 presentationType:(unsigned char)a6;
- (void)prepareForRender:(long long)a0;

@end
