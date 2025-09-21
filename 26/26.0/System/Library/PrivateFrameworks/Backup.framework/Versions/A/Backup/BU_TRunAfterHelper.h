@class NSString;

@interface BU_TRunAfterHelper : NSObject <TMarkTornDown> {
    struct unique_function<void ()> { struct unique_ptr<fstd::callable_details::callable_holder_base<void>, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { void *__ptr_; } fCallableHolder; } _functor;
    BOOL _onMainThread;
    struct atomic_flag { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _cancelled;
}

@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct TNSWeakPtr<BU_TRunAfterHelper> { id x0; })postFunctor:(void *)a0 delayInSec:(double)a1 onMainThread:(BOOL)a2;

- (void)cancel:(BOOL)a0;
- (void)cancel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithFunctor:(void *)a0 onMainThread:(BOOL)a1;
- (void)post;

@end
