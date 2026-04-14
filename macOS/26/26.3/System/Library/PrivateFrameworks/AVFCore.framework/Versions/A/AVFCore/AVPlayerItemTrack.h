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

- (id)fallbackTrack;
- (int)trackID;
- (void)setVideoEnhancementFilterOptions:(id)a0;
- (void)setActiveHapticChannelIndex:(long long)a0;
- (void)_transferMutesHapticsToFig;
- (void)_transferHapticVolumeToFig;
- (id)_weakReferenceToPlayerItem;
- (BOOL)_figPlaybackItemIsReadyForInspection;
- (id)loudnessInfo;
- (id)effectiveLoudnessInfo;
- (void)_transferDisableColorMatchingToFig;
- (BOOL)willTrimShortDurationAudioSamples;
- (id)description;
- (BOOL)mutesHaptics;
- (BOOL)disableColorMatching;
- (long long)activeHapticChannelIndex;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)_transferActiveHapticChannelIndexToFig;
- (void)setDisableColorMatching:(BOOL)a0;
- (void)addOutput:(id)a0;
- (void)setHapticVolume:(float)a0;
- (void)dealloc;
- (void)setMutesHaptics:(BOOL)a0;
- (void)_transferLoudnessInfoToFig;
- (id)_playerItem;
- (BOOL)isEqual:(id)a0;
- (void)_transferVideoEnhancementOptionsToFig;
- (void)removeOutput:(id)a0;
- (unsigned long long)hash;
- (id)videoEnhancementFilterOptions;
- (float)hapticVolume;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)a0;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;
- (void)_updateTrackExtractionIDArrayProperty;
- (void)_transferEnabledToFig;
- (int)effectiveEQPreset;
- (void)setLoudnessInfo:(id)a0;
- (void)_transferVideoFieldModeToFig;

@end
