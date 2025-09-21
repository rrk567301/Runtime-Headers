@class NSObject;
@protocol OS_dispatch_queue;

@interface ULTimerFactory : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *primaryQueue;

+ (id)_instance;
+ (void)setPrimaryQueue:(id)a0;
+ (id)timerOnPrimaryQueueWithInterval:(id)a0 repeats:(id)a1 block:(id /* block */)a2;

- (void).cxx_destruct;

@end
