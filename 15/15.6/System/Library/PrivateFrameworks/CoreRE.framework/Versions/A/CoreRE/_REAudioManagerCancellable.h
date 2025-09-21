@interface _REAudioManagerCancellable : NSObject {
    struct atomic<signed char> { struct __cxx_atomic_impl<signed char, std::__cxx_atomic_base_impl<signed char>> { _Atomic char __a_value; } __a_; } _cancelled;
}

@property (nonatomic) struct AudioService { void /* function */ **x0; id x1; } *audioService;
@property (readonly, getter=isCancelled) char cancelled;

- (id)init;
- (void)cancel;

@end
