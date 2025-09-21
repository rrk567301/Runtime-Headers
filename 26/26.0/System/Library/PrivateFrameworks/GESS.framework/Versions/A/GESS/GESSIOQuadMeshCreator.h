@interface GESSIOQuadMeshCreator : GESSIOPolyMeshCreator

- (BOOL)create:(id)a0;
- (BOOL)setFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)setPositions:(float *)a0 size:(unsigned long long)a1;
- (BOOL)setFaceGroupIDs:(unsigned short *)a0 size:(unsigned long long)a1;
- (BOOL)setFaceVertexCounts:(char *)a0 size:(unsigned long long)a1;
- (BOOL)setFaceVertexNormalIndices:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)setFaceVertexUVIndices:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)setUVs:(float *)a0 size:(unsigned long long)a1;
- (BOOL)setVertexColors:(float *)a0 size:(unsigned long long)a1;
- (BOOL)setVertexNormals:(float *)a0 size:(unsigned long long)a1;

@end
