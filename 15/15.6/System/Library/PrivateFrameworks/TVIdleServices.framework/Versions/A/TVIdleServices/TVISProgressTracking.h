@class NSProgress;

@interface TVISProgressTracking : NSObject

@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) char isExecuting;
@property (readonly, nonatomic) char isCancelled;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithChildExecutionUnits:(long long)a0;

@end
