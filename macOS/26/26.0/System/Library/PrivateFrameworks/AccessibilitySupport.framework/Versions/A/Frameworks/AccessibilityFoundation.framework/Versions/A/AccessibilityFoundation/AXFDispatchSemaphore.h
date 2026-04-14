@class NSObject;
@protocol OS_dispatch_semaphore;

@interface AXFDispatchSemaphore : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *_semaphore;

- (void)signal;
- (id)initWithCount:(long long)a0;
- (void)wait;
- (BOOL)waitWithTimeout:(long long)a0;
- (void).cxx_destruct;

@end
