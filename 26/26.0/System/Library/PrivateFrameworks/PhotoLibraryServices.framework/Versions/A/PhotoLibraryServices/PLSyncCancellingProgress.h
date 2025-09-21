@interface PLSyncCancellingProgress : NSProgress

@property (copy) id /* block */ pl_cancellationHandler;

+ (id)discreteProgressWithTotalUnitCount:(long long)a0;

- (void)setCancellationHandler:(id /* block */)a0;
- (void)cancel;
- (void).cxx_destruct;

@end
