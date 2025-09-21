@class NSString, NSArray, SAMPPodcastCollection;

@interface SAMPPlayPodcastCollection : SADomainCommand

@property (copy, nonatomic) NSString *assetInfo;
@property (copy, nonatomic) NSString *episodePlaybackOrder;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (retain, nonatomic) SAMPPodcastCollection *podcastCollection;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableITunesAccount;
@property (nonatomic) char startPlaying;

+ (id)playPodcastCollection;
+ (id)playPodcastCollectionWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
