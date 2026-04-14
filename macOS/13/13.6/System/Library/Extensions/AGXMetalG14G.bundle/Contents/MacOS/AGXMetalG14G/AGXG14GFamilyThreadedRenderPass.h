@class NSString, __end_cap_, NSObject, __end_;
@protocol OS_dispatch_queue, MTLDevice;

@interface AGXG14GFamilyThreadedRenderPass : IOGPUMetalParallelRenderCommandEncoder <MTLParallelRenderCommandEncoderSPI> {
    void *_impl;
    NSObject<OS_dispatch_queue> *dispatchQueue;
    struct vector<AGXG14GFamilyRenderContext *, std::allocator<AGXG14GFamilyRenderContext *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<AGXG14GFamilyRenderContext **, std::allocator<AGXG14GFamilyRenderContext *>> { id *__value_; } x1; } _subOBJCRenderCommandEncoders;
    struct vector<AGX::G14::RenderContext *, std::allocator<AGX::G14::RenderContext *>> { struct RenderContext **__begin_; struct RenderContext **__end_; struct __compressed_pair<AGX::G14::RenderContext **, std::allocator<AGX::G14::RenderContext *>> { struct RenderContext **__value_; } __end_cap_; } _subRenderCommandEncoders;
}

@property BOOL separateCommits;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)endEncoding;
- (BOOL)isMemorylessRender;
- (id)renderCommandEncoder;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a0 capacity:(unsigned long long)a1;
- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setDepthStoreAction:(unsigned long long)a0;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)a0 lastBatch:(unsigned int)a1 filterIndex:(unsigned int)a2;
- (BOOL)setMTLCounterSampleLocationWithBuffer:(id)a0 startIndex:(unsigned int)a1 endIndex:(unsigned int)a2;

@end
