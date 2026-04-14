@class TRIClient;
@protocol TRIAssetPurging, TRIPaths;

@interface TRICacheDeleteCallbacks : NSObject {
    id<TRIPaths> _paths;
    id<TRIAssetPurging> _assetPurger;
    TRIClient *_loggingClient;
}

+ (void)registerCallbacksWithPaths:(id)a0 loggingClient:(id)a1;
+ (id)_assetPurger:(id)a0 loggingClient:(id)a1;

- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (id)initWithPaths:(id)a0 assetPurger:(id)a1 loggingClient:(id)a2;
- (id)purgeable:(id)a0 urgency:(int)a1;
- (id)purge:(id)a0 urgency:(int)a1;
- (void)_logPurgedAmountTelemetry:(int)a0 purgedAmountInBytes:(id)a1;
- (BOOL)_trialVolumeIsEqualToVolume:(id)a0;

@end
