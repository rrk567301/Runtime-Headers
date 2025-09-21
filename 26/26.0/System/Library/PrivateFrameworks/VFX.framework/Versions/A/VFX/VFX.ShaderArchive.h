@interface VFX.ShaderArchive : NSObject {
    void /* unknown type, empty encoding */ family;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ libraries;
    void /* unknown type, empty encoding */ specializedFunctions;
    void /* unknown type, empty encoding */ functions;
    void /* unknown type, empty encoding */ renderPipelines;
    void /* unknown type, empty encoding */ meshRenderPipelines;
    void /* unknown type, empty encoding */ computePipelines;
}

- (id)init;
- (void).cxx_destruct;
- (void)addComputePipelineWithDescriptor:(id)a0;
- (void)addLibraryWithLabel:(id)a0 path:(id)a1;
- (void)addMeshRenderPipelineWithDescriptor:(id)a0;
- (void)addRenderPipelineWithDescriptor:(id)a0;

@end
