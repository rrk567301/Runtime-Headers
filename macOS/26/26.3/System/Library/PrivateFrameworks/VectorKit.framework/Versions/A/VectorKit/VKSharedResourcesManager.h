@class VKSharedResources, NSMapTable;

@interface VKSharedResourcesManager : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    VKSharedResources *_sharedResources;
    NSMapTable *_tilegroupIdentifierToResources;
}

+ (id)sharedResources;
+ (id)sharedResourcesCreateIfNil:(BOOL)a0 addResourceUser:(BOOL)a1;
+ (id)sharedManager;
+ (void)removeResourceUser;

- (BOOL)hasResources;
- (id)init;
- (void)_removeResourceUser;
- (void).cxx_destruct;
- (id)resourcesCreateIfNil:(BOOL)a0 addResourceUser:(BOOL)a1;
- (id).cxx_construct;

@end
