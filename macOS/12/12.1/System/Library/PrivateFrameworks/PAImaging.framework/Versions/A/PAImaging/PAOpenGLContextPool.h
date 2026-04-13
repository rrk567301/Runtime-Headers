@class NSObject, NSMutableArray, PAOpenGLDevice;
@protocol OS_dispatch_queue;

@interface PAOpenGLContextPool : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_unusedContexts;
    long long _maximumContextsCreated;
}

@property (readonly, weak, nonatomic) PAOpenGLDevice *device;

+ (id)sharedContextPool;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (id)_newContext;
- (id)checkOutContext;
- (void)checkInContext:(id)a0;
- (void)_executeBlock:(id /* block */)a0 withContext:(id)a1;
- (void)executeBlockWithContext:(id /* block */)a0;

@end
