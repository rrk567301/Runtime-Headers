@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand {
    float _preferredRate;
    NSArray *_extendedSupportedPlaybackRates;
}

@property (copy, nonatomic) NSArray *supportedPlaybackRates;

- (void).cxx_destruct;
- (float)preferredRate;
- (void)setPreferredRate:(float)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (id)extendedSupportedPlaybackRates;
- (id)newCommandEventWithPlaybackRate:(float)a0;
- (void)setExtendedSupportedPlaybackRates:(id)a0;

@end
