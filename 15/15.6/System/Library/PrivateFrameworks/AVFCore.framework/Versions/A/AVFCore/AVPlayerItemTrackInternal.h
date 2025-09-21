@class AVAsset, AVWeakReference, NSString, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVPlayerItemTrackInternal : NSObject {
    AVWeakReference *weakReferenceToPlayerItem;
    struct OpaqueFigPlaybackItem { } *figPlaybackItem;
    char figPlaybackItemIsReadyForInspection;
    AVAsset *asset;
    int trackID;
    NSString *videoFieldMode;
    NSDictionary *loudnessInfo;
    NSDictionary *videoEnhancementFilterOptions;
    char enabled;
    char enabledWasSet;
    char disableColorMatching;
    char disableColorMatchingWasSet;
    long long activeHapticChannelIndex;
    char activeHapticChannelIndexWasSet;
    float hapticVolume;
    char hapticVolumeWasSet;
    char mutesHaptics;
    char mutesHapticsWasSet;
    NSMutableArray *sampleBufferOutputs;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
}

@end
