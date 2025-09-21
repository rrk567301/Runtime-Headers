@class NSArray, NSMutableArray, ISWrappedAVAudioSession;

@interface PXVideoSessionManagerDisplayAssetOptions : NSObject

@property (readonly, nonatomic) NSMutableArray *strategiesStore;
@property (nonatomic) char shouldCreateUniqueVideoSession;
@property (readonly, nonatomic) NSArray *strategies;
@property (nonatomic) char shouldStabilizeLivePhotosIfPossible;
@property (nonatomic) char shouldPlayLivePhotosWithSettlingEffectIfPossible;
@property (nonatomic) char shouldCrossfadeLivePhotosWhenLooping;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } livePhotoLoopTimeRange;
@property (nonatomic) char isAudioAllowed;
@property (retain, nonatomic) ISWrappedAVAudioSession *audioSession;

- (id)init;
- (void).cxx_destruct;
- (void)addContentDeliveryStrategyWithDeliveryQuality:(long long)a0 segmentTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 streamingAllowed:(char)a2;
- (void)addContentDeliveryStrategyWithDeliveryQuality:(long long)a0 segmentTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 streamingAllowed:(char)a2 networkAccessAllowed:(char)a3;

@end
