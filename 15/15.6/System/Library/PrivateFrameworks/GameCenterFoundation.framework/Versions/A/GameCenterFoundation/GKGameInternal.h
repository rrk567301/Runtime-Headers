@class NSString, NSDictionary, NSURL, NSSet, GKArtworkMetadata, GKGameDescriptor;

@interface GKGameInternal : GKGameDescriptor {
    union { struct { unsigned char _platform_unused : 8; unsigned char _prerendered : 1; unsigned char _supportsLeaderboards : 1; unsigned char _supportsLeaderboardSets : 1; unsigned char _hasAggregateLeaderboard : 1; unsigned char _supportsAchievements : 1; unsigned char _supportsMultiplayer : 1; unsigned char _valid : 1; unsigned char _unused : 1; unsigned char _supportsTurnBasedMultiplayer : 1; unsigned char _isArcadeGame : 1; unsigned char _supportsChallenges : 1; unsigned char _supportsLeaderboardChallenges : 1; unsigned short _reserved : 13; } ; unsigned int _value; } _flags;
}

@property (readonly, nonatomic) NSURL *storeURL;
@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *icons;
@property (nonatomic, getter=isPrerendered) char prerendered;
@property (nonatomic) char supportsLeaderboards;
@property (nonatomic) char hasAggregateLeaderboard;
@property (nonatomic) unsigned short numberOfLeaderboards;
@property (retain, nonatomic) NSString *defaultLeaderboardIdentifier;
@property (nonatomic) char supportsLeaderboardSets;
@property (nonatomic) unsigned short numberOfLeaderboardSets;
@property (nonatomic) char supportsAchievements;
@property (nonatomic) unsigned short numberOfAchievements;
@property (nonatomic) unsigned short maxAchievementPoints;
@property (nonatomic) char supportsMultiplayer;
@property (nonatomic) char supportsTurnBasedMultiplayer;
@property (retain, nonatomic) NSSet *compatiblePlatforms;
@property (retain, nonatomic) NSSet *supportedTransports;
@property (readonly, nonatomic) char canBeIndexed;
@property (nonatomic, getter=isValid) char valid;
@property (readonly, nonatomic) GKGameDescriptor *gameDescriptor;
@property (nonatomic) char isArcadeGame;
@property (nonatomic) char supportsChallenges;
@property (nonatomic) char supportsLeaderboardChallenges;
@property (retain, nonatomic) GKArtworkMetadata *artwork;

+ (id)createGameControllerDaemonGameInternal;
+ (id)createGamedGameInternal;
+ (id)secureCodedPropertyKeys;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned int)flags;
- (void)setFlags:(unsigned int)a0;
- (void)setValid:(char)a0;
- (id)storeURL;
- (id)defaultCategory;
- (void)setSupportsMultiplayer:(char)a0;
- (char)supportsMultiplayer;
- (unsigned short)numberOfCategories;
- (char)isArcadeGame;
- (void)setPrerendered:(char)a0;
- (id)serverRepresentation;
- (void)setIsArcadeGame:(char)a0;
- (void)setSupportsAchievements:(char)a0;
- (void)setSupportsChallenges:(char)a0;
- (void)setSupportsLeaderboardChallenges:(char)a0;
- (void)setSupportsLeaderboardSets:(char)a0;
- (void)setSupportsLeaderboards:(char)a0;
- (void)setSupportsTurnBasedMultiplayer:(char)a0;
- (char)supportsAchievements;
- (char)supportsChallenges;
- (char)supportsLeaderboardChallenges;
- (char)supportsLeaderboardSets;
- (char)supportsLeaderboards;
- (char)supportsTurnBasedMultiplayer;

@end
