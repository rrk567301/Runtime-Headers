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
- (id)_playerItem;
- (void)_transferLoudnessInfoToFig;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;
- (void)_transferMutesHapticsToFig;
- (long long)activeHapticChannelIndex;
- (void)_transferVideoFieldModeToFig;
- (float)hapticVolume;
- (BOOL)mutesHaptics;
- (id)effectiveLoudnessInfo;
- (id)videoEnhancementFilterOptions;
- (BOOL)isEqual:(id)a0;
- (int)effectiveEQPreset;
- (void)addOutput:(id)a0;
- (id)loudnessInfo;
- (void)_updateTrackExtractionIDArrayProperty;
- (void)_transferEnabledToFig;
- (BOOL)willTrimShortDurationAudioSamples;
- (unsigned long long)hash;
- (void)setDisableColorMatching:(BOOL)a0;
- (void)_transferHapticVolumeToFig;
- (void)setMutesHaptics:(BOOL)a0;
- (id)_weakReferenceToPlayerItem;
- (void)_transferActiveHapticChannelIndexToFig;
- (void)setActiveHapticChannelIndex:(long long)a0;
- (BOOL)disableColorMatching;
- (id)description;
- (void)_transferVideoEnhancementOptionsToFig;
- (void)setVideoEnhancementFilterOptions:(id)a0;
- (BOOL)_figPlaybackItemIsReadyForInspection;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)a0;
- (void)removeOutput:(id)a0;
- (void)_transferDisableColorMatchingToFig;
- (id)fallbackTrack;
- (void)dealloc;
- (void)setLoudnessInfo:(id)a0;

@end
