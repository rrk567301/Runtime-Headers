@class MTLStencilDescriptor, CCPass, MTLDepthStencilDescriptor;
@protocol MTLDepthStencilState;

@interface CCRenderContext : NSObject {
    MTLStencilDescriptor *_alwaysPassStencilDescriptor;
    MTLStencilDescriptor *_lensMeshStencilDescriptor;
    MTLStencilDescriptor *_warpStencilDescriptor;
    MTLStencilDescriptor *_postWarpStencilDescriptor;
    MTLDepthStencilDescriptor *_alwaysPassNoDepthStencilDescriptor;
    MTLDepthStencilDescriptor *_lensMeshNoDepthDescriptor;
    MTLDepthStencilDescriptor *_warpNoDepthStencilDescriptor;
    MTLDepthStencilDescriptor *_warpDepthStencilDescriptor;
    MTLDepthStencilDescriptor *_postWarpNoDepthDescriptor;
    MTLDepthStencilDescriptor *_meshOcclusionStencilDescriptor;
    id<MTLDepthStencilState> _alwaysPassStencilState;
    id<MTLDepthStencilState> _lensMeshStencilState;
    id<MTLDepthStencilState> _warpNoDepthStencilState;
    id<MTLDepthStencilState> _warpDepthStencilState;
    id<MTLDepthStencilState> _postWarpStencilState;
    id<MTLDepthStencilState> _meshOcclusionStencilState;
    id<MTLDepthStencilState> _zoomLensSet3StencilState;
    id<MTLDepthStencilState> _zoomWarpDepthStencilState;
    struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *__begin_; struct CGPoint *__end_; struct CGPoint *__cap_; } _depthRangesForLayers;
    struct vector<MTLViewport, std::allocator<MTLViewport>> { struct *__begin_; struct *__end_; struct *__cap_; } _currentViewport;
    struct unordered_map<unsigned long, CCLayerIndex, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, CCLayerIndex>>> { struct __hash_table<std::__hash_value_type<unsigned long, CCLayerIndex>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, CCLayerIndex>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, CCLayerIndex>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, CCLayerIndex>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CCLayerIndex>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CCLayerIndex>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CCLayerIndex>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, CCLayerIndex>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _layerIndexForPass;
    float _defaultZFarForLayers;
    BOOL _sanitizeBottomLayer;
    long long _currentLayerIndex;
    BOOL _transitionToFarForBottomLayer;
}

@property (nonatomic) unsigned long long totalLayerCount;
@property (nonatomic) unsigned long long initialNHighDepthRangeLayerCount;
@property (nonatomic) BOOL isHandMeshLayerEnabled;
@property (retain, nonatomic) CCPass *currentPassInExecution;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)calculateDepthViewportsForLayers;
- (void)createStencilStates:(BOOL)a0 mtlDevice:(id)a1;
- (BOOL)resetEmptySpaceSkipping:(id)a0;
- (BOOL)setEmptySpaceSkippingAndDepthTestingWithEncoder:(id)a0;
- (void)setEmptySpaceSkippingWithEncoder:(id)a0 enable:(BOOL)a1;
- (void)setLayerIndex:(long long)a0 forPass:(id)a1;
- (void)tickFrame;

@end
