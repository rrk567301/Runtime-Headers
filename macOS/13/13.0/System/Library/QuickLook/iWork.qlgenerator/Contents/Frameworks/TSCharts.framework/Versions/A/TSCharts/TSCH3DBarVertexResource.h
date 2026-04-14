@class TSCH3DBarExtrusionGeometry;

@interface TSCH3DBarVertexResource : TSCH3DAbstractBarVertexResource {
    TSCH3DBarExtrusionGeometry *_geometry;
}

- (void).cxx_destruct;
- (id)get;
- (id)geometry;
- (long long)numVertices;
- (id)initWithGeometry:(id)a0;
- (long long)verticesOffset;
- (long long)numCapVertices;
- (long long)capOffset;

@end
