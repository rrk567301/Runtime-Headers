@class NSArray, NSString;
@protocol DRMemoryResource;

@interface REMultiBufferMeshPayload : RESharedResourcePayload <REMeshPayload>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) id<DRMemoryResource> privatePayload;
@property (readonly, retain, nonatomic) id<DRMemoryResource> sharedPayload;
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
- (unsigned long long)estimatePayloadContainerOverheadSize;
- (id)initWithPayload:(id)a0 privatePayload:(id)a1 parts:(id)a2 models:(id)a3 instances:(id)a4 skeletons:(id)a5 isLimitedRenderAsset:(BOOL)a6;
- (struct MeshPayloadBuffers { struct variant<re::FixedInlineArray<NS::SharedPtr<MTL::Buffer>, 8>, re::FixedInlineArray<re::BufferSliceSourceCPU, 8>> { struct __impl<re::FixedInlineArray<NS::SharedPtr<MTL::Buffer>, 8>, re::FixedInlineArray<re::BufferSliceSourceCPU, 8>> { union __union<std::__variant_detail::_Trait::_Available, 0UL, re::FixedInlineArray<NS::SharedPtr<MTL::Buffer>, 8>, re::FixedInlineArray<re::BufferSliceSourceCPU, 8>> { char x0; struct __alt<0UL, re::FixedInlineArray<NS::SharedPtr<MTL::Buffer>, 8>> { struct FixedInlineArray<NS::SharedPtr<MTL::Buffer>, 8UL> { struct SharedPtr<MTL::Buffer> { struct Buffer *x0; } x0[8]; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, re::FixedInlineArray<re::BufferSliceSourceCPU, 8>> { char x0; struct __alt<1UL, re::FixedInlineArray<re::BufferSliceSourceCPU, 8>> { struct FixedInlineArray<re::BufferSliceSourceCPU, 8UL> { struct BufferSliceSourceCPU { unsigned long long x0; void *x1; struct SharedPtr<NS::Object> { struct Object *x0; } x2; } x0[8]; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x0; })meshPayloadBuffersWithDevice:(id)a0;

@end
