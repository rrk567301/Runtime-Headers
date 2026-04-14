@interface IKCacheContext : NSObject

@property (retain) id cacheManager;
@property (retain) id glRenderer;
@property (readonly) id glContext;

- (void)finalize;
- (void)dealloc;

@end
