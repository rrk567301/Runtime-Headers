@class NSArray, AVAssetTrack, NSString, AVPlayerItemTrackInternal;

@interface AVPlayerItemTrack : NSObject {
    AVPlayerItemTrackInternal *_playerItemTrack;
}

@property (readonly, nonatomic) NSArray *outputs;
@property (readonly, nonatomic) AVAssetTrack *assetTrack;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) float currentVideoFrameRate;
@property (copy, nonatomic) NSString *videoFieldMode;

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)removeOutput:(id)a0;
- (int)trackID;
- (id)_playerItem;
- (void)addOutput:(id)a0;
- (id)loudnessInfo;
- (void)setLoudnessInfo:(id)a0;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)a0;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (id)videoEnhancementFilterOptions;
- (BOOL)disableColorMatching;
- (long long)activeHapticChannelIndex;
- (float)hapticVolume;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;
- (id)_weakReferenceToPlayerItem;
- (void)_transferEnabledToFig;
- (void)_transferVideoFieldModeToFig;
- (void)_transferLoudnessInfoToFig;
- (void)_transferVideoEnhancementOptionsToFig;
- (void)_transferDisableColorMatchingToFig;
- (void)_transferActiveHapticChannelIndexToFig;
- (void)_transferHapticVolumeToFig;
- (void)_updateTrackExtractionIDArrayProperty;
- (void)_transferCachedValuesToFig;
- (id)fallbackTrack;
- (id)effectiveLoudnessInfo;
- (int)effectiveEQPreset;
- (BOOL)willTrimShortDurationAudioSamples;
- (void)setVideoEnhancementFilterOptions:(id)a0;
- (void)setDisableColorMatching:(BOOL)a0;
- (void)setActiveHapticChannelIndex:(long long)a0;
- (void)setHapticVolume:(float)a0;

@end
