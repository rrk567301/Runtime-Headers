@interface GESSMathAABB : NSObject {
    struct Box3T<float> { struct Vector3T<float> { float v[3]; } min_; struct Vector3T<float> { float v[3]; } max_; } _boxImpl;
}

@property float minX;
@property float minY;
@property float minZ;
@property float maxX;
@property float maxY;
@property float maxZ;

- (void).cxx_destruct;
- (id).cxx_construct;
- (const void *)boxImpl;
- (void)setBoxImpl:(const void *)a0;

@end
