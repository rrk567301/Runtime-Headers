@interface GESSIOTriMeshCreator : GESSIOPolyMeshCreator

- (char)create:(id)a0;
- (char)setFaceGroupIDs:(unsigned short *)a0 size:(unsigned long long)a1;
- (char)setFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (char)setPositions:(float *)a0 size:(unsigned long long)a1;
- (char)setTexCoordFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (char)setTexCoords:(float *)a0 size:(unsigned long long)a1;
- (char)setVertexColors:(float *)a0 size:(unsigned long long)a1;
- (char)setVertexNormalFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (char)setVertexNormals:(float *)a0 size:(unsigned long long)a1;

@end
