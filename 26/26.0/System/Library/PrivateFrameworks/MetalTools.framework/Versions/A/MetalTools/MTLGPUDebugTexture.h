@class NSString;
@protocol MTLHeap, MTLDevice, MTLTextureSPI;

@interface MTLGPUDebugTexture : MTLToolsTexture <MTLGPUDebugResource, MTLGPUDebugViewable> {
    unsigned long long _identifier;
    struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<unsigned long long, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _activeViews;
}

@property (retain, nonatomic) id<MTLTextureSPI> baseObject;
@property (readonly, nonatomic) unsigned long long gpuIdentifier;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned long long underlyingGPUAddress;
@property int responsibleProcess;
@property (readonly) unsigned long long allocationID;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addView:(unsigned long long)a0;
- (id)baseObject;
- (struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<unsigned long long, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; })getActiveViews;
- (unsigned long long)handleForOffset:(unsigned long long)a0;
- (id)initWithTexture:(id)a0 heap:(id)a1 device:(id)a2;
- (id)initWithTextureView:(id)a0 parentBuffer:(id)a1 heap:(id)a2 device:(id)a3;
- (id)initWithTextureView:(id)a0 parentTexture:(id)a1 heap:(id)a2 device:(id)a3;
- (id)newCompressedTextureViewWithPixelFormat:(unsigned long long)a0 textureType:(unsigned long long)a1 level:(unsigned long long)a2 slice:(unsigned long long)a3;
- (id)newTextureViewWithDescriptor:(id)a0;
- (id)newTextureViewWithPixelFormat:(unsigned long long)a0;
- (id)newTextureViewWithPixelFormat:(unsigned long long)a0 resourceIndex:(unsigned long long)a1;
- (id)newTextureViewWithPixelFormat:(unsigned long long)a0 textureType:(unsigned long long)a1 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)newTextureViewWithPixelFormat:(unsigned long long)a0 textureType:(unsigned long long)a1 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 resourceIndex:(unsigned long long)a4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)a0 textureType:(unsigned long long)a1 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 swizzle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)a0 textureType:(unsigned long long)a1 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 swizzle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a4 resourceIndex:(unsigned long long)a5;
- (void)removeView:(unsigned long long)a0;
- (void)useWithComputeEncoder:(id)a0 usage:(unsigned long long)a1;
- (void)useWithRenderEncoder:(id)a0 usage:(unsigned long long)a1 stages:(struct optional<unsigned long> { union { char x0; unsigned long long x1; } x0; BOOL x1; })a2;

@end
