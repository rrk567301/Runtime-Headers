@class NSString;

@interface RBLayerGroup : NSObject {
    struct objc_ptr<NSString *> { NSString *_p; } _id_key;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _last_id;
    struct spin_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _lock;
    void *_instances;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
