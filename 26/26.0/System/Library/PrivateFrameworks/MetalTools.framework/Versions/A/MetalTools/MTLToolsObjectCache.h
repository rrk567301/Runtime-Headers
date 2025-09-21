@class __end_, NSMapTable, __cap_;

@interface MTLToolsObjectCache : NSObject {
    NSMapTable *_map;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    struct vector<id, std::allocator<id>> { __end_ **__begin_; __cap_ **x0; id *x1; } _keyRemoveList;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _listLock;
}

- (void)removeKey:(id)a0;
- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getCachedObjectForKey:(id)a0;
- (id)getCachedObjectForKey:(id)a0 onMiss:(id /* block */)a1;

@end
