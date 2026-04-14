@class TRIClient;
@protocol TRIAssetPurging, TRIPaths;

@interface TRICacheDeleteCallbacks : NSObject {
    id<TRIPaths> _paths;
    id<TRIAssetPurging> _assetPurger;
    TRIClient *_loggingClient;
}

+ (void)registerCallbacksWithPaths:(id)a0 experimentDatabase:(id)a1 rolloutDatabase:(id)a2 taskQueue:(id)a3 loggingClient:(id)a4;
+ (id)_assetPurger:(id)a0 experimentDatabase:(id)a1 rolloutDatabase:(id)a2 taskQueue:(id)a3 loggingClient:(id)a4;

- (void)cancel:(id)a0;
- (id)purgeable:(id)a0 urgency:(int)a1;
- (BOOL)_trialVolumeIsEqualToVolume:(id)a0;
- (void).cxx_destruct;
- (void)_logPurgedAmountTelemetry:(int)a0 purgedAmountInBytes:(id)a1;
- (id)purge:(id)a0 urgency:(int)a1;
- (id)initWithPaths:(id)a0 assetPurger:(id)a1 loggingClient:(id)a2;

@end
