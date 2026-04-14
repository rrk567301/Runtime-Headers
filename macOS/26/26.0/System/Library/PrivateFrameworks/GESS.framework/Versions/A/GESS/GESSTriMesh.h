@interface GESSTriMesh : GESSTriMeshBase

- (id)init;
- (BOOL)getFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)getPositions:(float *)a0 size:(unsigned long long)a1;
- (BOOL)getTexCoordFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)getTexCoords:(float *)a0 size:(unsigned long long)a1;
- (BOOL)getFaceCrossField:(float *)a0 size:(unsigned long long)a1 type:(int)a2;
- (BOOL)getFaceGroupIDs:(unsigned short *)a0 size:(unsigned long long)a1;
- (BOOL)getFaceVertexNormalIndices:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)getFaceVertexUVIndices:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)getGroupIDToMaterialNameDict:(id)a0;
- (BOOL)getMaterial:(id)a0;
- (BOOL)getUVs:(float *)a0 size:(unsigned long long)a1;
- (BOOL)getVertexColors:(float *)a0 size:(unsigned long long)a1;
- (BOOL)getVertexNormalFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)getVertexNormals:(float *)a0 size:(unsigned long long)a1;
- (void *)meshImpl;
- (BOOL)setFaceCrossField:(float *)a0 size:(unsigned long long)a1;
- (void)setMeshImpl:(const void *)a0;

@end
