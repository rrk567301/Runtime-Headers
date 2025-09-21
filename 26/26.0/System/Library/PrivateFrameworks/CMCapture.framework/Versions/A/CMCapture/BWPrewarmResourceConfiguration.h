@class FigMetalAllocatorBackend;

@interface BWPrewarmResourceConfiguration : NSObject

@property (readonly) FigMetalAllocatorBackend *sharedMetalAllocatorBackend;

+ (id)newResourceConfigWithSharedMetalAllocator:(id)a0;

- (void)dealloc;

@end
