@class MPMusicPlayerControllerNowPlayingTimeSnapshot, NSArray, MPMusicPlayerQueueDescriptor, MPMusicPlayerControllerNowPlaying;

@interface MPMusicPlayerServerStateUpdateRecord : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char hasQueueDescriptor;
@property (retain, nonatomic) MPMusicPlayerQueueDescriptor *queueDescriptor;
@property (nonatomic) char hasNowPlaying;
@property (retain, nonatomic) MPMusicPlayerControllerNowPlaying *nowPlaying;
@property (nonatomic) char hasTimeSnapshot;
@property (retain, nonatomic) MPMusicPlayerControllerNowPlayingTimeSnapshot *timeSnapshot;
@property (nonatomic) char hasRepeatMode;
@property (nonatomic) long long repeatMode;
@property (nonatomic) char hasShuffleMode;
@property (nonatomic) long long shuffleMode;
@property (nonatomic) char hasContentItemIDs;
@property (copy, nonatomic) NSArray *contentItemIDs;
@property (nonatomic) char queueDidChange;
@property (nonatomic) char itemDidEnd;
@property (nonatomic) char queueDidEnd;
@property (nonatomic) char hasTimeMetadata;
@property (nonatomic) char audioFormatDidChange;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
