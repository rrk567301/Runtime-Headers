@interface MTLGPUDebugHeap : MTLToolsHeap {
    BOOL _enableResourceUsageValidation;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferLock;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; unsigned int *__cap_; } _bufferIndices;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _textureLock;
    struct vector<std::pair<unsigned int, MTLTextureType>, std::allocator<std::pair<unsigned int, MTLTextureType>>> { void *__begin_; void *__end_; void *__cap_; } _textureIndicesAndTypes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accelerationStructureLock;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; unsigned int *__cap_; } _accelerationStructureIndices;
}

- (id)newAccelerationStructureWithSize:(unsigned long long)a0 offset:(unsigned long long)a1;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)newAccelerationStructureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 resourceIndex:(unsigned long long)a1;
- (id).cxx_construct;
- (id)newAccelerationStructureWithDescriptor:(id)a0;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 offset:(unsigned long long)a1 resourceIndex:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithHeap:(id)a0 descriptor:(id)a1 device:(id)a2;
- (id)_newGPUDebugAccelerationStructure:(id)a0;
- (void)enumerateAccelerationStructureIndices:(id /* block */)a0;
- (void)enumerateBufferIndices:(id /* block */)a0;
- (void)enumerateTextureIndicesAndTypes:(id /* block */)a0;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)newTextureWithDescriptor:(id)a0;
- (void)notifyResourceReleasing:(id)a0;

@end
