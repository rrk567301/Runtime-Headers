@class TSCH3DStrokePatternTexture;

@interface TSCH3DPrefilteredLineRendererRenderCacheObject : TSCH3DSceneRenderCacheObject {
    TSCH3DStrokePatternTexture *_strokeTexture;
}

@property (nonatomic) BOOL didRenderOnce;

- (id)init;
- (void).cxx_destruct;
- (void)allocateDynamicResourcesIntoArray:(id)a0;
- (id)p_geometry;
- (id)p_texcoords;
- (id)p_box;
- (id)p_originalGeometry;
- (id)p_normals;
- (id)p_diffuseTexcoords;
- (void)submitResourcesWithLineRenderer:(id)a0 setting:(id)a1;
- (void)renderWithLineRenderer:(id)a0 setting:(id)a1 fromVertex:(const void *)a2 toVertex:(const void *)a3;

@end
