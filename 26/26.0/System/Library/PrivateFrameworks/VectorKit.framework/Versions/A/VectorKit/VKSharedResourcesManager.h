@class VKSharedResources, NSMapTable;

@interface VKSharedResourcesManager : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    VKSharedResources *_sharedResources;
    NSMapTable *_tilegroupIdentifierToResources;
}

+ (id)sharedManager;
+ (void)removeResourceUser;
+ (id)sharedResourcesCreateIfNil:(BOOL)a0 addResourceUser:(BOOL)a1;
+ (id)sharedResources;

- (id)resourcesCreateIfNil:(BOOL)a0 addResourceUser:(BOOL)a1;
- (id)init;
- (void)_removeResourceUser;
- (id).cxx_construct;
- (BOOL)hasResources;
- (void).cxx_destruct;

@end
