@class NSString;
@protocol PFTScheduler;

@interface _PFTOffMainThreadScheduler : NSObject <PFTScheduler>

@property (readonly, nonatomic) id<PFTScheduler> alreadyOffMainThreadScheduler;
@property (readonly, nonatomic) id<PFTScheduler> needToGetOffMainThreadScheduler;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)init;
- (void)performBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)initWithBackgroundScheduler:(id)a0;
- (id)performCancellableBlock:(id /* block */)a0;
- (id)performCancellableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;

@end
