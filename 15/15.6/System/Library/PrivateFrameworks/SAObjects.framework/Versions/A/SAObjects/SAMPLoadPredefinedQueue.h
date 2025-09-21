@class NSArray, NSString, NSNumber;

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (nonatomic) char dryRun;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) int mediaItemType;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount;
@property (nonatomic) char shouldShuffle;
@property (copy, nonatomic) NSNumber *startPlaying;

+ (id)loadPredefinedQueue;
+ (id)loadPredefinedQueueWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
