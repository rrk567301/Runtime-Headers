@interface MPSCPUAccelerationStructure : NSObject {
    void *_bvh;
    unsigned long long _branchingFactor;
    struct _MPSAxisAlignedBoundingBox { void /* unknown type, empty encoding */ min; void /* unknown type, empty encoding */ max; } _boundingBox;
    char _instancing;
    char _identityTransforms;
}

@property (readonly, nonatomic) struct _MPSAxisAlignedBoundingBox { } boundingBox;

- (void)dealloc;
- (id).cxx_construct;
- (unsigned long long)branchingFactor;
- (void *)bvh;
- (char)identityTransforms;
- (char)instancing;
- (void)rebuildWithDescriptor:(id)a0;
- (void)rebuildWithDescriptor:(id)a0 queue:(id)a1;

@end
