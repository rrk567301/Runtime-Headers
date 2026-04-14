@class NSObject;
@protocol OS_dispatch_queue, MTL4CommandAllocator;

@interface CP_OBJECT_progressive_style_resource : NSObject {
    union { struct REImmersiveEnvironmentMaskResources *mtl3; struct REImmersiveEnvironmentMaskResources_MTL4 *mtl4; } _resource;
    struct { id<MTL4CommandAllocator> cmd_allocator; NSObject<OS_dispatch_queue> *queue; } _mtl4;
    struct REImmersiveEnvironmentMaskImmersionInputParams { void /* unknown type, empty encoding */ backdropAABBMin; void /* unknown type, empty encoding */ backdropAABBMax; float immersionCurve0; float startWidth; float endWidth; float startHeight; float endHeight; float roundness; float blur; float floorMask; } _input_params;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1 configuration:(id)a2;

@end
