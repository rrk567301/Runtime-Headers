@interface AGXG14GFamilyRayTracingAccelerationStructure : IOGPUMetalAccelerationStructure {
    struct RayTracingAccelerationStructure { unsigned long long gpu_va; char *ptr; unsigned long long size; unsigned int headerSize; unsigned int heapIndex; } _impl;
}

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)uniqueIdentifier;
- (id)initWithDevice:(id)a0 length:(unsigned long long)a1;
- (id)initWithDevice:(id)a0 length:(unsigned long long)a1 resourceIndex:(unsigned long long)a2 storageMode:(unsigned long long)a3;

@end
