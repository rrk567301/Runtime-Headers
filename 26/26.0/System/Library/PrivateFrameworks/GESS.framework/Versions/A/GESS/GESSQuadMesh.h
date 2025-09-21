@interface GESSQuadMesh : GESSQuadMeshBase

- (id)init;
- (BOOL)getFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)getPositions:(float *)a0 size:(unsigned long long)a1;
- (BOOL)getFaceGroupIDs:(unsigned short *)a0 size:(unsigned long long)a1;
- (BOOL)getFaceVertexCounts:(char *)a0 size:(unsigned long long)a1;
- (BOOL)getFaceVertexNormalIndices:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)getFaceVertexUVIndices:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)getGroupIDToMaterialNameDict:(id)a0;
- (BOOL)getMaterial:(id)a0;
- (BOOL)getUVs:(float *)a0 size:(unsigned long long)a1;
- (BOOL)getVertexColors:(float *)a0 size:(unsigned long long)a1;
- (BOOL)getVertexNormals:(float *)a0 size:(unsigned long long)a1;
- (void *)meshImpl;
- (void)setMeshImpl:(const void *)a0;

@end
