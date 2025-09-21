@class MXIBackLayer;
@protocol MTLDevice;

@interface MXISceneBuilderTiled : MXISceneBuilder {
    id<MTLDevice> _device;
    struct unique_ptr<tiled::Processor, std::default_delete<tiled::Processor>> { struct Processor *__ptr_; } _proc;
    unsigned int _requestedThreadPoolSize;
    unsigned int _tileSize;
    unsigned int _atlasSize;
    BOOL _requestHighCompatibilityUSD;
    BOOL _packInArrayOfTextures;
    BOOL _backingPlane;
    MXIBackLayer *_backLayer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)buildSceneWithOptions:(id)a0 error:(id *)a1;
- (void)generateBackingPlaneMesh:(void *)a0 atDepth:(float)a1;
- (void)generateBackingPlaneTexture:(id)a0 forScene:(id)a1;
- (id)initBuilderWithType:(long long)a0 numberOfLayers:(long long)a1 depthRange:(struct { float x0; float x1; })a2 materialDescriptor:(id)a3 options:(id)a4;
- (void)process:(id)a0 layer:(long long)a1 face:(long long)a2 color:(id)a3 depth:(id)a4 error:(id *)a5;
- (void)process:(id)a0 layer:(long long)a1 face:(long long)a2 color:(id)a3 depth:(id)a4 params:(id)a5 error:(id *)a6;

@end
