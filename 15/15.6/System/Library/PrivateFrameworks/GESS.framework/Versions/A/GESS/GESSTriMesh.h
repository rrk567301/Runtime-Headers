@interface GESSTriMesh : GESSTriMeshBase

- (id)init;
- (char)getFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (char)getPositions:(float *)a0 size:(unsigned long long)a1;
- (char)getTexCoordFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (char)getTexCoords:(float *)a0 size:(unsigned long long)a1;
- (char)getVertexColors:(float *)a0 size:(unsigned long long)a1;
- (char)getVertexNormalFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (char)getVertexNormals:(float *)a0 size:(unsigned long long)a1;
- (void *)meshImpl;
- (void)setMeshImpl:(const void *)a0;

@end
