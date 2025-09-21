@class NSArray;

@interface _MPCPodcastsPlaybackRateHelper : NSObject {
    void /* unknown type, empty encoding */ currentRate;
    void /* unknown type, empty encoding */ playerState;
    void /* unknown type, empty encoding */ defaults;
}

@property (class, nonatomic, readonly) NSArray *supportedPlaybackRates;
@property (class, nonatomic, readonly) float standardRate;
@property (class, nonatomic) float preferredPlaybackRate;

@property (nonatomic, readonly) float preferredPlaybackRateForDisplay;

- (id)init;
- (void).cxx_destruct;
- (char)canHandlePlaybackRateChangeForCommandEvent:(id)a0;
- (id)initWithCurrentRate:(float)a0 playbackState:(long long)a1;
- (id)initWithCurrentRate:(float)a0 playerState:(long long)a1 defaults:(id)a2;
- (void)saveWithRate:(float)a0;
- (char)supportsRate:(float)a0;
- (float)updatedPlaybackRateForChangePlaybackRateCommandEvent:(id)a0;

@end
