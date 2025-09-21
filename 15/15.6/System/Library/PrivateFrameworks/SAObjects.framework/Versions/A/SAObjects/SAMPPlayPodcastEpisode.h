@class NSString, NSArray, SAMPPodcast;

@interface SAMPPlayPodcastEpisode : SADomainCommand

@property (copy, nonatomic) NSString *assetInfo;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (retain, nonatomic) SAMPPodcast *podcastEpisode;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableITunesAccount;
@property (nonatomic) char startPlaying;

+ (id)playPodcastEpisode;
+ (id)playPodcastEpisodeWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
