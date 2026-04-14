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

- (int)trackID;
- (void)setHapticVolume:(float)a0;
- (int)effectiveEQPreset;
- (void)setActiveHapticChannelIndex:(long long)a0;
- (BOOL)willTrimShortDurationAudioSamples;
- (unsigned long long)hash;
- (void)setVideoEnhancementFilterOptions:(id)a0;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)a0;
- (BOOL)disableColorMatching;
- (void)removeOutput:(id)a0;
- (id)loudnessInfo;
- (void)setDisableColorMatching:(BOOL)a0;
- (id)videoEnhancementFilterOptions;
- (BOOL)_figPlaybackItemIsReadyForInspection;
- (id)effectiveLoudnessInfo;
- (void)_transferEnabledToFig;
- (void)setLoudnessInfo:(id)a0;
- (void)addOutput:(id)a0;
- (id)_weakReferenceToPlayerItem;
- (void)_transferHapticVolumeToFig;
- (void)_transferActiveHapticChannelIndexToFig;
- (void)_transferVideoEnhancementOptionsToFig;
- (void)_transferMutesHapticsToFig;
- (id)description;
- (void)dealloc;
- (void)_transferLoudnessInfoToFig;
- (float)hapticVolume;
- (void)setMutesHaptics:(BOOL)a0;
- (id)fallbackTrack;
- (id)_playerItem;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)_updateTrackExtractionIDArrayProperty;
- (void)_transferDisableColorMatchingToFig;
- (BOOL)isEqual:(id)a0;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;
- (BOOL)mutesHaptics;
- (void)_transferVideoFieldModeToFig;
- (long long)activeHapticChannelIndex;

@end
