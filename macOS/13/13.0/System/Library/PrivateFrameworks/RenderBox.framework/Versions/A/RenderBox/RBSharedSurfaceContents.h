@class NSString;

@interface RBSharedSurfaceContents : NSObject <NSSecureCoding, CARenderValue> {
    void *_surface;
    struct atomic<_opaque_pthread_t *> { struct __cxx_atomic_impl<_opaque_pthread_t *, std::__cxx_atomic_base_impl<_opaque_pthread_t *>> { _Atomic struct _opaque_pthread_t *__a_value; } __a_; } _last_update_thread;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)replacementObjectForCoder:(id)a0;
- (void)CA_prepareRenderValue;
- (void *)CA_copyRenderValue;

@end
