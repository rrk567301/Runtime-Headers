@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface FMFSynchronizer : NSObject

@property (nonatomic) BOOL timeoutOccurred;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;

- (void)wait;
- (void)signal;
- (void).cxx_destruct;
- (id)loggingID;
- (id)initWithDescription:(id)a0 andTimeout:(double)a1;

@end
