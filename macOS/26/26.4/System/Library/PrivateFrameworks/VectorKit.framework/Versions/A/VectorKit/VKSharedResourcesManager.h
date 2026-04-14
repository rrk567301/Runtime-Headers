@class VKSharedResources, NSMapTable;

@interface VKSharedResourcesManager : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    VKSharedResources *_sharedResources;
    NSMapTable *_tilegroupIdentifierToResources;
}

+ (id)sharedManager;
+ (id)sharedResources;
+ (id)sharedResourcesCreateIfNil:(BOOL)a0 addResourceUser:(BOOL)a1;
+ (void)removeResourceUser;

- (BOOL)hasResources;
- (id)resourcesCreateIfNil:(BOOL)a0 addResourceUser:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)_removeResourceUser;

@end
