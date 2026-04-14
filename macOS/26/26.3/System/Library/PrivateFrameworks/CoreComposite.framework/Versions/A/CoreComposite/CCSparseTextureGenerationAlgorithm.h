@class CCContextDeviceGroup, CCSparseTextureGenerationAlgorithmDescriptor, NSArray, CCPipelineStateLibrary, NSMutableArray, NSObject;
@protocol MTLHeap, MTLTexture, MTLFence, OS_dispatch_semaphore;

@interface CCSparseTextureGenerationAlgorithm : CCAlgorithm {
    CCPipelineStateLibrary *_renderPipelineLibrary;
    CCContextDeviceGroup *_deviceGroup;
    CCSparseTextureGenerationAlgorithmDescriptor *_algorithmDescriptor;
    unsigned long long _nTextures;
    id<MTLHeap> _sparseHeap;
    NSMutableArray *_colorSparseTextures;
    NSMutableArray *_depthSparseTextures;
    id<MTLTexture> _colorSparseTexture;
    id<MTLTexture> _colorTexture;
    NSMutableArray *_mappedRegionVertexBuffer;
    NSMutableArray *_mappedRegionIndexBuffer;
    NSMutableArray *_indexCountsForSourceViews;
    unsigned long long _colorSparseTexturePixelFormat;
    unsigned long long _depthSparseTexturePixelFormat;
    unsigned long long _occupancyMapPixelFormat;
    long long _sparseTextureWidth;
    long long _sparseTextureHeight;
    NSMutableArray *_patchesBySourceViews;
    NSMutableArray *_patchIndicesInPatchList;
    id<MTLFence> _fenceForSparseMapping;
    unsigned long long _texturePoolIdForMapping;
    unsigned long long _texturePoolIdForDrawing;
    NSObject<OS_dispatch_semaphore> *_inFlightSemaphoreForSparseTextures;
    NSArray *_colorTextures;
    NSArray *_depthTextures;
    id<MTLFence> _fenceForSparseTextureCreation;
}

- (void)setDescriptor:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)createSparseHeap;
- (BOOL)createSparseTextures;
- (void)createVertexData:(id)a0;
- (struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })getTileRegionFromPatch:(struct CCPatchStruct { char x0; char x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; char x8; char x9; long long x10; } *)a0 pixelFormat:(unsigned long long)a1;
- (void)sortPatches:(id)a0;
- (void)unmapTexturePool:(id)a0 mapPoolId:(unsigned long long)a1;

@end
