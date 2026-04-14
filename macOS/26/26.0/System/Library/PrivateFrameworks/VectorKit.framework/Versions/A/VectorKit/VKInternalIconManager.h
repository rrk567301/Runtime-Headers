@class VKResourceManager;

@interface VKInternalIconManager : NSObject {
    struct shared_ptr<grl::IconManager> { struct IconManager *__ptr_; struct __shared_weak_count *__cntrl_; } _iconManager;
    struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor *__ptr_; struct __shared_weak_count *__cntrl_; } _stylesheetVendor;
    struct read_write_lock { struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock; } _nameToStyleManagerLock;
    struct map<NSString *, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>, NSStringMapComparison, geo::allocator_adapter<std::pair<NSString *const, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, mdm::zone_mallocator>> { struct __tree<std::__value_type<NSString *, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, std::__map_value_compare<NSString *, std::__value_type<NSString *, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, NSStringMapComparison>, geo::allocator_adapter<std::__value_type<NSString *, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, mdm::zone_mallocator>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; struct allocator_adapter<std::__tree_node<std::__value_type<NSString *, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, void *>, mdm::zone_mallocator> { struct zone_mallocator { } _allocator; } __node_alloc_; unsigned long long __size_; } __tree_; } _nameToStyleManager;
    struct unique_ptr<md::TileGroupNotificationManager, std::default_delete<md::TileGroupNotificationManager>> { struct TileGroupNotificationManager *__ptr_; } _ownedNotificationManager;
    void *_sharedNotificationManager;
    struct _retain_ptr<VKResourceManager *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKResourceManager *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _resourceManager;
    struct shared_ptr<md::GeoResourceProvider> { struct GeoResourceProvider *__ptr_; struct __shared_weak_count *__cntrl_; } _resourceProvider;
    struct shared_ptr<grl::FontManager> { struct FontManager *__ptr_; struct __shared_weak_count *__cntrl_; } _fontManager;
    BOOL _isSharedIconManager;
}

+ (long long)convertGrlSizeGroup:(unsigned char)a0;
+ (unsigned char)convertSizeGroup:(long long)a0;

- (void)purge;
- (BOOL)isCachingAtlases;
- (void)purgeNonsharedResources;
- (void)dealloc;
- (unsigned int)styleAttributeTransitSystemTypeKey;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { void *x0; struct __shared_weak_count *x1; })_styleManagerForStylesheetName:(id)a0 contentScale:(float)a1;
- (id)balloonIconForStyleAttributes:(id)a0 withStylesheetName:(id)a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (struct shared_ptr<grl::IconImage> { struct IconImage *x0; struct __shared_weak_count *x1; })_iconImageForStyleAttributes:(id)a0 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { void *x0; struct __shared_weak_count *x1; })a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (id)init;
- (id)imageForIconID:(unsigned int)a0 contentScale:(float)a1 sizeGroup:(long long)a2 modifiers:(id)a3;
- (id)imageForImageSourceKey:(id)a0;
- (id)imageForKey:(unsigned int)a0 value:(unsigned int)a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (unsigned int)trafficIncidentTypeKey;
- (void)_purgeStyleManagers;
- (id)init:(struct shared_ptr<grl::IconManager> { struct IconManager *x0; struct __shared_weak_count *x1; })a0 stylesheetVendor:(struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor *x0; struct __shared_weak_count *x1; })a1 tileGroupNotificationManager:(void *)a2;
- (void)setIsCachingAtlases:(BOOL)a0;
- (id).cxx_construct;
- (id)imageForStyleAttributes:(id)a0 withStylesheetName:(id)a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (id)imageForDataID:(unsigned int)a0 text:(id)a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (unsigned int)darkVariant;
- (id)imageForName:(id)a0 contentScale:(float)a1 sizeGroup:(long long)a2 modifiers:(id)a3;
- (id)imageForStyleAttributes:(id)a0 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { void *x0; struct __shared_weak_count *x1; })a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (unsigned int)styleAttributeTransitTypeKey;
- (void).cxx_destruct;

@end
