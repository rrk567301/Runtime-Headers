@class NSObject;
@protocol OS_dispatch_semaphore;

@interface AXFDispatchSemaphore : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *_semaphore;

- (void)signal;
- (BOOL)waitWithTimeout:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCount:(long long)a0;
- (void)wait;

@end
