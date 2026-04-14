@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand {
    float _preferredRate;
    NSArray *_extendedSupportedPlaybackRates;
}

@property (copy, nonatomic) NSArray *supportedPlaybackRates;

- (void)setPreferredRate:(float)a0;
- (float)preferredRate;
- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)extendedSupportedPlaybackRates;
- (id)newCommandEventWithPlaybackRate:(float)a0;
- (void)setExtendedSupportedPlaybackRates:(id)a0;

@end
