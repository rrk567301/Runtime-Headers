@class FPProgressProxy;

@interface _FPParentProgress : NSProgress

@property (readonly) FPProgressProxy *progressProxy;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isCancellable;
- (BOOL)isPausable;
- (void)setProgressProxy:(id)a0;

@end
