@class TSCH3DBarExtrusionGeometry;

@interface TSCH3DBarVertexResource : TSCH3DAbstractBarVertexResource {
    TSCH3DBarExtrusionGeometry *_geometry;
}

- (id)get;
- (id)geometry;
- (void).cxx_destruct;
- (long long)numVertices;
- (long long)capOffset;
- (id)initWithGeometry:(id)a0;
- (long long)numCapVertices;
- (long long)verticesOffset;

@end
