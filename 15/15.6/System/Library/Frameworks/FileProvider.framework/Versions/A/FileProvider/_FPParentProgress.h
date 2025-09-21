@class FPProgressProxy;

@interface _FPParentProgress : NSProgress

@property (readonly) FPProgressProxy *progressProxy;

- (void)dealloc;
- (void).cxx_destruct;
- (char)isCancellable;
- (char)isPausable;
- (void)setProgressProxy:(id)a0;

@end
