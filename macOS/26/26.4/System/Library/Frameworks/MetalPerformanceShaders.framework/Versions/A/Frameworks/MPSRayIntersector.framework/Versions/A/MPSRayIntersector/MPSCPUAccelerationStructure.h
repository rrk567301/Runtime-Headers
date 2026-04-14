@interface MPSCPUAccelerationStructure : NSObject {
    void *_bvh;
    unsigned long long _branchingFactor;
    struct _MPSAxisAlignedBoundingBox { void /* unknown type, empty encoding */ min; void /* unknown type, empty encoding */ max; } _boundingBox;
    BOOL _instancing;
    BOOL _identityTransforms;
}

@property (readonly, nonatomic) struct _MPSAxisAlignedBoundingBox { } boundingBox;

- (id).cxx_construct;
- (void)dealloc;
- (unsigned long long)branchingFactor;
- (void *)bvh;
- (BOOL)identityTransforms;
- (BOOL)instancing;
- (void)rebuildWithDescriptor:(id)a0;
- (void)rebuildWithDescriptor:(id)a0 queue:(id)a1;

@end
