@interface AGXG15GFamilyRayTracingAccelerationStructure : IOGPUMetalAccelerationStructure {
    struct RayTracingAccelerationStructure { struct BufferView<unsigned char> { struct AddressView<unsigned char> { unsigned long long gpu; char *cpu; } address; unsigned long long size; } buffer; struct Allocation { unsigned int index; void *pool; BOOL directly_assigned; } bvh_state_heap_allocation; } _impl;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)accelerationStructureUniqueIdentifier;
- (id)initWithBuffer:(id)a0 device:(id)a1 length:(unsigned long long)a2 resourceIndex:(unsigned long long)a3;
- (id)initWithDevice:(id)a0 length:(unsigned long long)a1;
- (id)initWithDevice:(id)a0 length:(unsigned long long)a1 resourceIndex:(unsigned long long)a2 storageMode:(unsigned long long)a3;

@end
