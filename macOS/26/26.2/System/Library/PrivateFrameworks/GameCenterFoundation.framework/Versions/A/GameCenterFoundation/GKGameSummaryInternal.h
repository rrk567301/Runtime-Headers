@class NSString, NSSet, NSDate, NSNumber;

@interface GKGameSummaryInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *adamID;
@property (retain, nonatomic) NSDate *playedAt;
@property (retain, nonatomic) NSSet *compatiblePlatforms;
@property (nonatomic) BOOL isArcade;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;

@end
