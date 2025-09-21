@class TSCH3DResource, TSCH3Dvec3DataBuffer;

@interface TSCH3DChartSilhouetteEdgeCollectProcessor : TSCH3DRetargetRenderProcessor {
    struct EdgeDetectionParameters { char detectSilhouetteEdges; char detectSharpEdges; float sharpEdgeThreshold; } _edgeDetectionParameters;
}

@property (retain, nonatomic) TSCH3DResource *vertices;
@property (readonly, nonatomic) TSCH3Dvec3DataBuffer *edges;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)matrix;
- (void)submit:(id)a0;
- (long long)attribute:(id)a0 resource:(id)a1 specs:(const struct AttributeSpecs { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a2;
- (id)initWithEdgeDetectionParameters:(const struct EdgeDetectionParameters { char x0; char x1; float x2; } *)a0;

@end
