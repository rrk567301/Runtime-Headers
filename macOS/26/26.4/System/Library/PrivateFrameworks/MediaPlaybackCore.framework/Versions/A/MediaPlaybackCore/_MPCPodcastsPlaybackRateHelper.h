@class NSArray;

@interface _MPCPodcastsPlaybackRateHelper : NSObject {
    void /* unknown type, empty encoding */ currentRate;
    void /* unknown type, empty encoding */ playerState;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ rateMigrator;
}

@property (class, nonatomic, readonly) NSArray *supportedPlaybackRates;
@property (class, nonatomic, readonly) NSArray *extendedSupportedPlaybackRates;
@property (class, nonatomic, readonly) NSArray *extendedSupportedPlaybackRatesForVideo;
@property (class, nonatomic, readonly) float standardRate;

+ (BOOL)routeHasVideoSpeedRestrictions:(long long)a0;

- (void).cxx_destruct;
- (id)init;
- (BOOL)canHandlePlaybackRateChangeForCommandEvent:(id)a0 hasVideo:(BOOL)a1;
- (float)computedRateForChangePlaybackRateCommandEvent:(id)a0 hasVideo:(BOOL)a1;
- (float)currentDisplayRateWithSavedRate:(float)a0;
- (id)initWithCurrentRate:(float)a0 playerState:(long long)a1;
- (void)saveWithRate:(float)a0 uuid:(id)a1 routeType:(long long)a2;
- (void)saveWithRate:(float)a0 uuid:(id)a1 shouldSave:(BOOL)a2;
- (BOOL)supportsRate:(float)a0 hasVideo:(BOOL)a1;
- (float)updatedPlaybackRateForChangePlaybackRateCommandEvent:(id)a0 podcastUUID:(id)a1 hasVideo:(BOOL)a2 routeType:(long long)a3;

@end
