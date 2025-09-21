@class VKInternalIconManager, VKResourceManager;

@interface VKSharedResources : NSObject {
    struct _retain_ptr<VKInternalIconManager *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKInternalIconManager *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _iconManager;
    struct shared_ptr<md::TextureManager> { struct TextureManager *__ptr_; struct __shared_weak_count *__cntrl_; } _textureManager;
    struct shared_ptr<md::MaterialTextureManager> { struct MaterialTextureManager *__ptr_; struct __shared_weak_count *__cntrl_; } _materialTextureManager;
    struct unique_ptr<md::SharedResourcesManager, std::default_delete<md::SharedResourcesManager>> { struct SharedResourcesManager *__ptr_; } _sharedResourceManager;
    struct _retain_ptr<VKResourceManager *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKResourceManager *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _resourceManager;
    struct shared_ptr<md::DataOverrideManager> { struct DataOverrideManager *__ptr_; struct __shared_weak_count *__cntrl_; } _dataOverrideManager;
    struct shared_ptr<md::StandardCommandBufferSelector> { struct StandardCommandBufferSelector *__ptr_; struct __shared_weak_count *__cntrl_; } _standardCommandBufferSelector;
    struct unique_ptr<md::Device, std::default_delete<md::Device>> { struct Device *__ptr_; } _device;
    struct unique_ptr<md::GeoidModel, std::default_delete<md::GeoidModel>> { struct GeoidModel *__ptr_; } _undulationModel;
    struct unique_ptr<ggl::AlphaAtlas, std::default_delete<ggl::AlphaAtlas>> { struct AlphaAtlas *__ptr_; } _alphaAtlas;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::default_delete<ggl::IsoAlphaAtlas>> { struct IsoAlphaAtlas *__ptr_; } _highInflationAlphaAtlas;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::default_delete<ggl::IsoAlphaAtlas>> { struct IsoAlphaAtlas *__ptr_; } _isoAlphaAtlas;
    struct unique_ptr<ggl::DistanceAtlas, std::default_delete<ggl::DistanceAtlas>> { struct DistanceAtlas *__ptr_; } _distanceAtlas;
    struct shared_ptr<ggl::StandardLibrary> { struct StandardLibrary *__ptr_; struct __shared_weak_count *__cntrl_; } _shaderLibrary;
    struct CMPhotoDecompressionSession { } *_defaultDecompressionSession;
    struct CMPhotoDecompressionSession { } *_secondaryDecompressionSession;
    struct read_write_lock { struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock; } _figCreationLock;
    struct shared_ptr<md::GeoResourceProvider> { struct GeoResourceProvider *__ptr_; struct __shared_weak_count *__cntrl_; } _resourceProvider;
    struct shared_ptr<grl::IconManager> { struct IconManager *__ptr_; struct __shared_weak_count *__cntrl_; } _grlIconManager;
    struct shared_ptr<grl::FontManager> { struct FontManager *__ptr_; struct __shared_weak_count *__cntrl_; } _grlFontManager;
    struct unique_ptr<md::TileGroupNotificationManager, std::default_delete<md::TileGroupNotificationManager>> { struct TileGroupNotificationManager *__ptr_; } _tileGroupNotificationManager;
    unsigned int _referenceCount;
    struct atomic<unsigned long> { struct __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> { _Atomic unsigned long long __a_value; } __a_; } _globalFrameStamp;
    struct once_flag { unsigned long long __state_; } _undulationModelCreationFlag;
}

@property (readonly, nonatomic) VKInternalIconManager *iconManager;
@property (readonly, nonatomic) struct shared_ptr<md::TextureManager> { struct TextureManager *x0; struct __shared_weak_count *x1; } textureManager;
@property (readonly, nonatomic) struct shared_ptr<md::MaterialTextureManager> { struct MaterialTextureManager *x0; struct __shared_weak_count *x1; } materialTextureManager;
@property (readonly, nonatomic) VKResourceManager *resourceManager;
@property (readonly, nonatomic) struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor *__ptr_; struct __shared_weak_count *__cntrl_; } stylesheetVendor;
@property (readonly, nonatomic) void *device;
@property (readonly, nonatomic) void *gglDevice;
@property (readonly, nonatomic) struct shared_ptr<md::StandardCommandBufferSelector> { struct StandardCommandBufferSelector *x0; struct __shared_weak_count *x1; } standardCommandBufferSelector;
@property (readonly, nonatomic) void *alphaAtlas;
@property (readonly, nonatomic) void *highInflationAlphaAtlas;
@property (readonly, nonatomic) void *isoAlphaAtlas;
@property (readonly, nonatomic) void *distanceAtlas;
@property (readonly, nonatomic) const void *shaderLibrary;
@property (readonly, nonatomic) void *grlIconManager;
@property (readonly, nonatomic) struct shared_ptr<grl::FontManager> { struct FontManager *x0; struct __shared_weak_count *x1; } grlFontManager;
@property (readonly, nonatomic) unsigned long long globalFrameStamp;
@property (readonly, nonatomic) void *undulationModel;
@property (readonly, nonatomic) void *tileGroupNotificationManager;
@property (readonly, nonatomic) struct CMPhotoDecompressionSession { } *defaultDecompressionSession;
@property (readonly, nonatomic) struct CMPhotoDecompressionSession { } *secondaryDecompressionSession;
@property (nonatomic) BOOL snapshotterIsInService;

- (void)dealloc;
- (const void *)dataOverrideManager;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)prune:(unsigned char)a0;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;
- (void)frameDidComplete:(unsigned long long)a0;
- (BOOL)_hasResourceUsers;
- (id)_initWithDevice:(void *)a0 standardLibrary:(const void *)a1;
- (void)_removeResourceUser;
- (void)startDecompressionSession;
- (void)_addResourceUser;
- (id).cxx_construct;
- (void)purgeDecompressSessionCachedBuffers;
- (void).cxx_destruct;

@end
