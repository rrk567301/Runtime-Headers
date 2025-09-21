@interface FI_TRunSoonHelper : NSObject {
    struct unique_function<void ()> { struct unique_ptr<fstd::callable_details::callable_holder_base<void>, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { void *__ptr_; } fCallableHolder; } _functor;
    int _dispatchType;
}

+ (void)postFunctor:(void *)a0 andDispatchType:(int)a1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dispatch;
- (id)initWithFunctor:(void *)a0 andDispatchType:(int)a1;
- (void)post;
- (void)repost;

@end
