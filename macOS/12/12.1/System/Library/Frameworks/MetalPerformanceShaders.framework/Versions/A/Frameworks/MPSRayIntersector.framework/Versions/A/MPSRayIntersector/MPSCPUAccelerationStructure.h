@interface MPSCPUAccelerationStructure : NSObject {
    void *_bvh;
}

- (void)dealloc;
- (void *)bvh;
- (void)rebuildWithDescriptor:(id)a0;

@end
