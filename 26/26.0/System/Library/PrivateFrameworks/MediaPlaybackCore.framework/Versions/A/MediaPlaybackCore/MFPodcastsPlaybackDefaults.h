@interface MFPodcastsPlaybackDefaults : NSObject <MFPlaybackDefaults>

@property (nonatomic) BOOL shouldPreroll;
@property (nonatomic) BOOL allowScreenRecording;
@property (nonatomic) double rewindOnInterruptionDuration;

- (id)init;

@end
