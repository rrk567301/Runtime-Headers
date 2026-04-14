@class NSArray, NSString;
@protocol DRMesh;

@interface REDirectMeshPayload : RESharedResourcePayload <REMeshPayload> {
    unsigned char _identifier[16];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<DRMesh> directMesh;
@property (readonly, nonatomic) const unsigned char[16] *identifier;
@property (readonly, nonatomic) NSArray *parts;
@property (readonly, nonatomic) NSArray *models;
@property (readonly, nonatomic) NSArray *instances;
@property (readonly, nonatomic) NSArray *skeletons;
@property (readonly, nonatomic) struct FixedInlineArray<unsigned long, 8UL> { unsigned long long x0[8]; } payloadBufferSizes;
@property (readonly, nonatomic) unsigned long long totalPayloadSize;
@property (readonly, nonatomic, getter=isShareable) BOOL shareable;
@property (readonly, nonatomic) BOOL isLimitedRenderAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct AABB { struct Vector3<float> { union { struct { float x0; float x1; float x2; } x0; float x1[3]; } x0; } x0; struct Vector3<float> { union { struct { float x0; float x1; float x2; } x0; float x1[3]; } x0; } x1; })aabb;
- (unsigned long long)estimatePayloadContainerOverheadSize;
- (id)initWithDirectMesh:(id)a0;
- (void)makeBoundingBoxes:(void *)a0 perPartPerInstanceBoundingBoxes:(void *)a1;
- (struct MeshCollection { struct DynamicArray<re::MeshModel> { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct MeshModel *x4; } x0; })makeMeshCollection:(const void *)a0;
- (struct MeshPayloadBuffers { struct variant<re::FixedInlineArray<NS::SharedPtr<MTL::Buffer>, 8>, re::FixedInlineArray<re::BufferSliceSourceCPU, 8>> { struct __impl<re::FixedInlineArray<NS::SharedPtr<MTL::Buffer>, 8>, re::FixedInlineArray<re::BufferSliceSourceCPU, 8>> { union __union<std::__variant_detail::_Trait::_Available, 0UL, re::FixedInlineArray<NS::SharedPtr<MTL::Buffer>, 8>, re::FixedInlineArray<re::BufferSliceSourceCPU, 8>> { char x0; struct __alt<0UL, re::FixedInlineArray<NS::SharedPtr<MTL::Buffer>, 8>> { struct FixedInlineArray<NS::SharedPtr<MTL::Buffer>, 8UL> { struct SharedPtr<MTL::Buffer> { struct Buffer *x0; } x0[8]; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, re::FixedInlineArray<re::BufferSliceSourceCPU, 8>> { char x0; struct __alt<1UL, re::FixedInlineArray<re::BufferSliceSourceCPU, 8>> { struct FixedInlineArray<re::BufferSliceSourceCPU, 8UL> { struct BufferSliceSourceCPU { unsigned long long x0; void *x1; struct SharedPtr<NS::Object> { struct Object *x0; } x2; } x0[8]; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x0; })meshPayloadBuffersWithDevice:(id)a0;

@end
