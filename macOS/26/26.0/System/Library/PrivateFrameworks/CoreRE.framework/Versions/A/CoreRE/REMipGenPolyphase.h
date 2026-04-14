@protocol MTLFunction, MTLComputePipelineState;

@interface REMipGenPolyphase : NSObject {
    struct { id<MTLFunction> kernel; id<MTLComputePipelineState> pipelineState; } variant[5];
    int _tileMaxCountPerLevel[14];
    int _tileMaxCount;
    BOOL *_tileValid;
    BOOL _useTextureViews;
}

+ (struct _REMipGenPolyphaseOptions { BOOL x0; BOOL x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; })defaultOptions;

- (void)dealloc;
- (void).cxx_destruct;
- (void)copyAndGenerateMipmapsFromTexture:(id)a0 toTexture:(id)a1 withComputeEncoder:(id)a2;
- (void)copyAndGenerateMipmapsFromTexture:(id)a0 toTexture:(id)a1 withComputeEncoder:(id)a2 withOptions:(struct _REMipGenPolyphaseOptions { BOOL x0; BOOL x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; })a3;
- (void)generateMipmapsForTexture:(id)a0 withComputeEncoder:(id)a1;
- (void)generateMipmapsForTexture:(id)a0 withComputeEncoder:(id)a1 withOptions:(struct _REMipGenPolyphaseOptions { BOOL x0; BOOL x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; })a2;
- (id)initWithLibrary:(id)a0 binaryArchive:(id)a1;

@end
