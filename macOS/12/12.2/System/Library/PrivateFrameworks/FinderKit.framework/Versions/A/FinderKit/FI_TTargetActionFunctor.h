@interface FI_TTargetActionFunctor : NSObject {
    struct unique_function<void ()> { struct unique_ptr<fstd::finder_callable_details::callable_holder_base<void>, std::default_delete<fstd::finder_callable_details::callable_holder_base<void>>> { struct __compressed_pair<fstd::finder_callable_details::callable_holder_base<void> *, std::default_delete<fstd::finder_callable_details::callable_holder_base<void>>> { void *__value_; } __ptr_; } fCallableHolder; } _functor;
}

+ (id)targetActionGlue:(void *)a0;
+ (id)targetActionGlue:(id)a0 withFunctor:(void *)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)action:(id)a0;
- (void)bindTarget:(id)a0;
- (id)initWithFunctor:(void *)a0;

@end
