@class FPProgressProxy;

@interface _FPParentProgress : NSProgress

@property (readonly) FPProgressProxy *progressProxy;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setProgressProxy:(id)a0;

@end
