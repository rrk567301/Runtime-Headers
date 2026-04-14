@class NSArray;

@interface _MPCPodcastsPlaybackRateHelper : NSObject {
    void /* unknown type, empty encoding */ currentRate;
    void /* unknown type, empty encoding */ playerState;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ rateMigrator;
}

@property (class, nonatomic, readonly) NSArray *supportedPlaybackRates;
@property (class, nonatomic, readonly) NSArray *extendedSupportedPlaybackRates;
@property (class, nonatomic, readonly) float standardRate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canHandlePlaybackRateChangeForCommandEvent:(id)a0;
- (float)computedRateForChangePlaybackRateCommandEvent:(id)a0;
- (float)currentDisplayRateWithSavedRate:(float)a0;
- (id)initWithCurrentRate:(float)a0 playerState:(long long)a1;
- (void)saveWithRate:(float)a0 uuid:(id)a1;
- (BOOL)supportsRate:(float)a0;
- (float)updatedPlaybackRateForChangePlaybackRateCommandEvent:(id)a0 podcastUUID:(id)a1;

@end
