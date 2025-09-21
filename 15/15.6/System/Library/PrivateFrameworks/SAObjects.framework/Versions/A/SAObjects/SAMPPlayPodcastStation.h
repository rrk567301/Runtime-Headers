@class NSArray, NSString, SAMPPodcastStation;

@interface SAMPPlayPodcastStation : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableITunesAccount;
@property (nonatomic) char startPlaying;
@property (retain, nonatomic) SAMPPodcastStation *station;

+ (id)playPodcastStation;
+ (id)playPodcastStationWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
