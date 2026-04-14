@class OS_dispatch_semaphore;

@interface FileProviderDaemon.FPShouldPauseResult : NSObject

@property (nonatomic, readonly) BOOL shouldPause;
@property (nonatomic, readonly) OS_dispatch_semaphore *semaphore;

- (void).cxx_destruct;
- (id)init;
- (id)initWithShouldPause:(BOOL)a0 semaphore:(id)a1;

@end
