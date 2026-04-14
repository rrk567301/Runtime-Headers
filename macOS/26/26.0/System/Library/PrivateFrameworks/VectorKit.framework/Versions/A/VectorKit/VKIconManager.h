@class VKSharedResources, VKInternalIconManager, NSObject;
@protocol OS_dispatch_source;

@interface VKIconManager : NSObject {
    VKSharedResources *_sharedResources;
    VKInternalIconManager *_iconManager;
    BOOL _usingSingletonIconManager;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    NSObject<OS_dispatch_source> *_iconManagerReleaseSource;
    unsigned int _iconManagerTimerID;
}

+ (id)sharedManager;

- (void)purge;
- (BOOL)isCachingAtlases;
- (void)dealloc;
- (id)_internalIconManager;
- (unsigned int)styleAttributeTransitSystemTypeKey;
- (id)balloonIconForStyleAttributes:(id)a0 withStylesheetName:(id)a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (id)init;
- (id)imageForIconID:(unsigned int)a0 contentScale:(float)a1 sizeGroup:(long long)a2 modifiers:(id)a3;
- (id)imageForImageSourceKey:(id)a0;
- (id)imageForKey:(unsigned int)a0 value:(unsigned int)a1 contentScale:(float)a2 sizeGroup:(long long)a3 modifiers:(id)a4;
- (unsigned int)trafficIncidentTypeKey;
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
