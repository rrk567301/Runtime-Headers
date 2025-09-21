@class GESSMathAABB;

@interface GESSAlgGeometryQuality : NSObject {
    struct GeometryQuality { float avgEdgeLength; float avgVertexValence; float vertexValenceDeviation; float edgeLengthSD; float faceAngleSD; struct Box3T<float> { struct Vector3T<float> { float v[3]; } min_; struct Vector3T<float> { float v[3]; } max_; } aabb; } _qualityImpl;
}

@property float averageEdgeLength;
@property float averageVertexValence;
@property float vertexValenceDeviation;
@property float edgeLengthStandardDeviation;
@property float faceAngleStandardDeviation;
@property GESSMathAABB *AABB;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setQualityImpl:(const void *)a0;

@end
