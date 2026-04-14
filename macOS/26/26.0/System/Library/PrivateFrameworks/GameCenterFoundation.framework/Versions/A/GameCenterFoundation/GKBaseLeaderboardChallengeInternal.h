@class NSString, NSArray, NSDate;

@interface GKBaseLeaderboardChallengeInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *challengeID;
@property (retain, nonatomic) NSString *challengeVendorID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *scheduledEndDate;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (void)updateWithServerResponse:(id)a0;

@end
