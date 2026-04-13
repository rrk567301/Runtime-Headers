@class TSCH3DBarExtrusionGeometry;

@interface TSCH3DBarVertexResource : TSCH3DAbstractBarVertexResource {
    TSCH3DBarExtrusionGeometry *_geometry;
}

- (void).cxx_destruct;
- (id)get;
- (id)geometry;
- (long long)numVertices;
- (long long)verticesOffset;
- (long long)capOffset;
- (long long)numCapVertices;
- (id)initWithGeometry:(id)a0;

@end
