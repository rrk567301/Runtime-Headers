@class NSString;
@protocol PFTScheduler;

@interface PFTInhibitingSchedulerDecorator : NSObject <PFTScheduler>

@property (readonly, nonatomic) id<PFTScheduler> scheduler;
@property (readonly, copy, nonatomic) id /* block */ inhibitorFactory;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (void)performBlock:(id /* block */)a0;
- (id)initWithScheduler:(id)a0 inhibitorFactory:(id /* block */)a1;
- (id)performCancellableBlock:(id /* block */)a0;
- (id)performCancellableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;

@end
