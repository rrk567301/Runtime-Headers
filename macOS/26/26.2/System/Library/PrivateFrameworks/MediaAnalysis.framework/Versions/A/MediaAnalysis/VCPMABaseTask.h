@interface VCPMABaseTask : NSObject <VCPMADTaskProtocol> {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _started;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
}

@property (readonly, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (BOOL)run:(id *)a0;
- (void)cancel;
- (BOOL)isCanceled;
- (int)run;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (BOOL)autoCancellable;
- (float)resourceRequirement;

@end
