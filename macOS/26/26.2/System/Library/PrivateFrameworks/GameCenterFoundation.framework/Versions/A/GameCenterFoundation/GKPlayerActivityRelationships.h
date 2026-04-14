@class NSArray;

@interface GKPlayerActivityRelationships : GKInternalRepresentation

@property (retain, nonatomic) NSArray *players;
@property (retain, nonatomic) NSArray *games;
@property (retain, nonatomic) NSArray *leaderboards;
@property (retain, nonatomic) NSArray *achievements;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
