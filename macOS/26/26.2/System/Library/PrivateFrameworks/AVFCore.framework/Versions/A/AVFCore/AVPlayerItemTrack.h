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

- (id)loudnessInfo;
- (void)addOutput:(id)a0;
- (id)effectiveLoudnessInfo;
- (int)trackID;
- (void)_transferHapticVolumeToFig;
- (void)setLoudnessInfo:(id)a0;
- (id)videoEnhancementFilterOptions;
- (float)hapticVolume;
- (void)setDisableColorMatching:(BOOL)a0;
- (BOOL)mutesHaptics;
- (void)_transferVideoFieldModeToFig;
- (BOOL)disableColorMatching;
- (unsigned long long)hash;
- (void)_transferActiveHapticChannelIndexToFig;
- (BOOL)isEqual:(id)a0;
- (void)_transferDisableColorMatchingToFig;
- (int)effectiveEQPreset;
- (void)setHapticVolume:(float)a0;
- (id)_playerItem;
- (BOOL)_figPlaybackItemIsReadyForInspection;
- (void)setActiveHapticChannelIndex:(long long)a0;
- (id)description;
- (void)_updateTrackExtractionIDArrayProperty;
- (void)removeOutput:(id)a0;
- (void)_transferLoudnessInfoToFig;
- (long long)activeHapticChannelIndex;
- (void)_transferEnabledToFig;
- (void)_transferVideoEnhancementOptionsToFig;
- (void)setVideoEnhancementFilterOptions:(id)a0;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;
- (id)_weakReferenceToPlayerItem;
- (id)fallbackTrack;
- (BOOL)willTrimShortDurationAudioSamples;
- (void)_transferMutesHapticsToFig;
- (void)setMutesHaptics:(BOOL)a0;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)a0;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)dealloc;

@end
