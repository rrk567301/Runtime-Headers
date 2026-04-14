@interface GESSPolyMesh : NSObject {
    struct shared_ptr<void> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _meshImpl;
    struct shared_ptr<gess::mesh::Material> { struct Material *__ptr_; struct __shared_weak_count *__cntrl_; } _materialImpl;
    int _meshType;
}

@property (readonly) unsigned int vertexSize;
@property (readonly) unsigned int halfEdgeSize;
@property (readonly) unsigned int faceSize;
@property (readonly) unsigned int texCoordSize;
@property (readonly) unsigned int uvSize;
@property (readonly) unsigned int vertexNormalSize;

- (BOOL)valid;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)cloneFrom:(id)a0;
- (int)meshType;
- (void)setMeshType:(int)a0;
- (BOOL)getFaceData:(id)a0;
- (BOOL)getFaceGroupIDData:(id)a0;
- (BOOL)getFaceVertexNormalIndexData:(id)a0;
- (BOOL)getFaceVertexUVIndexData:(id)a0;
- (BOOL)getPositionData:(id)a0;
- (BOOL)getUVData:(id)a0;
- (BOOL)getVertexColorData:(id)a0;
- (BOOL)getVertexNormalData:(id)a0;
- (void *)materialImpl;
- (void *)meshImpl;
- (void)setMaterialImpl:(const void *)a0;
- (void)setMeshImpl:(const void *)a0;
- (BOOL)typeValid;

@end
