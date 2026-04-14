@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand {
    float _preferredRate;
    NSArray *_extendedSupportedPlaybackRates;
}

@property (copy, nonatomic) NSArray *supportedPlaybackRates;

- (float)preferredRate;
- (void)setPreferredRate:(float)a0;
- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)extendedSupportedPlaybackRates;
- (id)newCommandEventWithPlaybackRate:(float)a0;
- (void)setExtendedSupportedPlaybackRates:(id)a0;

@end
