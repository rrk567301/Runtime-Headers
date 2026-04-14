@class NSString, NSMutableArray, NSArray;

@interface GKMultiplayerGroupInternal : GKInternalRepresentation

@property (retain, nonatomic) NSMutableArray *participants;
@property (nonatomic) long long numberOfAutomached;
@property (nonatomic) long long playedAt;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSArray *games;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;

@end
