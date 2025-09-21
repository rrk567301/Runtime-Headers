@class NSString, NSArray, SAMPCollection, NSNumber;

@interface SAMPSetQueue : SADomainCommand

@property (copy, nonatomic) NSString *assetInfo;
@property (nonatomic) char dryRun;
@property (copy, nonatomic) NSArray *filters;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (retain, nonatomic) SAMPCollection *mediaItems;
@property (copy, nonatomic) NSString *recommendationId;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount;
@property (nonatomic) char shouldOverrideManuallyCuratedUpNext;
@property (nonatomic) char shouldReloadQueue;
@property (nonatomic) char shouldShuffle;
@property (copy, nonatomic) NSArray *sort;
@property (copy, nonatomic) NSNumber *startPlaying;

+ (id)setQueueWithDictionary:(id)a0 context:(id)a1;
+ (id)setQueue;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
