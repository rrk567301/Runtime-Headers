@class NSArray, AVAssetTrack, NSString, AVPlayerItemTrackInternal;

@interface AVPlayerItemTrack : NSObject {
    AVPlayerItemTrackInternal *_playerItemTrack;
}

@property (readonly, nonatomic) NSArray *outputs;
@property (readonly, nonatomic) AVAssetTrack *assetTrack;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) float currentVideoFrameRate;
@property (copy, nonatomic) NSString *videoFieldMode;

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;

- (int)effectiveEQPreset;
- (BOOL)mutesHaptics;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;
- (void)setLoudnessInfo:(id)a0;
- (void)setVideoEnhancementFilterOptions:(id)a0;
- (id)loudnessInfo;
- (void)addOutput:(id)a0;
- (void)dealloc;
- (void)_transferMutesHapticsToFig;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)removeOutput:(id)a0;
- (void)_transferEnabledToFig;
- (void)_transferVideoFieldModeToFig;
- (id)videoEnhancementFilterOptions;
- (int)trackID;
- (void)_transferActiveHapticChannelIndexToFig;
- (id)_weakReferenceToPlayerItem;
- (void)setDisableColorMatching:(BOOL)a0;
- (BOOL)disableColorMatching;
- (void)setHapticVolume:(float)a0;
- (BOOL)_figPlaybackItemIsReadyForInspection;
- (BOOL)willTrimShortDurationAudioSamples;
- (void)_transferDisableColorMatchingToFig;
- (void)_transferHapticVolumeToFig;
- (float)hapticVolume;
- (void)setActiveHapticChannelIndex:(long long)a0;
- (id)description;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)a0;
- (id)effectiveLoudnessInfo;
- (void)_transferVideoEnhancementOptionsToFig;
- (id)fallbackTrack;
- (void)_transferLoudnessInfoToFig;
- (void)_updateTrackExtractionIDArrayProperty;
- (unsigned long long)hash;
- (long long)activeHapticChannelIndex;
- (BOOL)isEqual:(id)a0;
- (id)_playerItem;
- (void)setMutesHaptics:(BOOL)a0;

@end
