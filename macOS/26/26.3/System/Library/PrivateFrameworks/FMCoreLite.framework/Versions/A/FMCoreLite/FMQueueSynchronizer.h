@class NSObject;
@protocol OS_dispatch_queue;

@interface FMQueueSynchronizer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithQueue:(id)a0;
- (void)conditionalSync:(id /* block */)a0;
- (void).cxx_destruct;

@end
