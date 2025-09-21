@class NSString, NSDictionary, NSURL, NSArray, NSNumber;

@interface GKGameActivityDefinition : NSObject {
    void /* function */ identifier;
    void /* function */ groupIdentifier;
    void /* function */ title;
    void /* function */ details;
    void /* function */ language;
    void /* function */ defaultProperties;
    void /* function */ associatedLeaderboardIDs;
    void /* function */ associatedAchievementDescriptionIDs;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *details;
@property (nonatomic, readonly) BOOL supportsPartyCode;
@property (nonatomic, readonly) NSURL *_fallbackURL;
@property (nonatomic, readonly) NSURL *fallbackURL;
@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSURL *partyStartURL;
@property (nonatomic, readonly) NSNumber *maxPlayers;
@property (nonatomic, retain) NSNumber *minPlayers;
@property (nonatomic, readonly) NSNumber *internalMaxPlayers;
@property (nonatomic, readonly) NSDictionary *defaultProperties;
@property (nonatomic, readonly) BOOL supportsUnlimitedPlayers;
@property (nonatomic, readonly) unsigned long long releaseState;
@property (nonatomic, readonly) long long playStyle;
@property (nonatomic, readonly) NSArray *associatedLeaderboardIDs;
@property (nonatomic, readonly) NSArray *associatedAchievementDescriptionIDs;

+ (void)loadGameActivityDefinitionsWithCompletionHandler:(id /* block */)a0;
+ (void)loadGameActivityDefinitionsWithIDs:(id)a0 completionHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)loadImageWithCompletionHandler:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 groupIdentifier:(id)a1 title:(id)a2 details:(id)a3 supportPartyCode:(BOOL)a4 fallbackURL:(id)a5 maxPlayers:(id)a6 minPlayers:(id)a7 defaultProperties:(id)a8 imageURL:(id)a9 releaseState:(unsigned long long)a10 playStyle:(long long)a11 associatedLeaderboardIDs:(id)a12 associatedAchievementDescriptionIDs:(id)a13 language:(id)a14 partyStartURL:(id)a15;
- (void)loadAchievementDescriptionsWithCompletionHandler:(id /* block */)a0;
- (void)loadLeaderboardsWithCompletionHandler:(id /* block */)a0;

@end
