@class NSDictionary;

@interface VCPHomeResidentMaintenanceTask : NSObject <VCPMADTaskProtocol> {
    id /* block */ _completionHandler;
    NSDictionary *_options;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _started;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _cancel;
    id /* block */ _extendTimeoutBlock;
}

@property (copy, nonatomic) id /* block */ cancelBlock;

+ (id)taskWithOptions:(id)a0 extendTimeoutBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;

- (BOOL)isCanceled;
- (void)dealloc;
- (void)cancel;
- (int)run;
- (void).cxx_destruct;
- (BOOL)autoCancellable;
- (id)initWithOptions:(id)a0 extendTimeoutBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (float)resourceRequirement;

@end
