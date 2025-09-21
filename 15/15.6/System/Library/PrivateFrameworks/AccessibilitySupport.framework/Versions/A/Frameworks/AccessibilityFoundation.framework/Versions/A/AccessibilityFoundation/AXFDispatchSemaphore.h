@class NSObject;
@protocol OS_dispatch_semaphore;

@interface AXFDispatchSemaphore : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *_semaphore;

- (void).cxx_destruct;
- (void)signal;
- (void)wait;
- (id)initWithCount:(long long)a0;
- (char)waitWithTimeout:(long long)a0;

@end
