@class GKGameInternal, NSString, NSDictionary, NSURL, NSNumber, GKGameDescriptor;
@protocol GKUtilityService;

@interface GKGame : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) id<GKUtilityService> utilityService;
@property (retain) GKGameInternal *internal;
@property (readonly) NSURL *storeURL;
@property long long environment;
@property (nonatomic, getter=isPrerendered) char prerendered;
@property (readonly, nonatomic) NSDictionary *gameDescriptorDictionary;
@property (readonly, nonatomic) GKGameDescriptor *gameDescriptor;
@property (readonly, nonatomic) NSNumber *adamID;
@property (readonly, nonatomic) NSNumber *externalVersion;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSString *shortBundleVersion;
@property (readonly, nonatomic) NSString *cacheKey;
@property (nonatomic) long long platform;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *defaultCategory;
@property (readonly, nonatomic) struct GKGameInfo { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; } gameInfo;
@property (readonly, nonatomic) char supportsMultiplayer;
@property (readonly, nonatomic) char supportsTurnBasedMultiplayer;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (char)instancesRespondToSelector:(SEL)a0;
+ (char)isFirstParty;
+ (void)loadGamesWithBundleIDs:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)currentGame;
+ (id)currentGameIncludingGameCenter:(char)a0;
+ (id)createNonStaticCurrentGame;
+ (char)isGameCenter;
+ (char)isNewsApp:(id)a0;
+ (char)isPreferences;
+ (void)loadTopGamesWithCompletionHandler:(id /* block */)a0;
+ (void)setCurrentGameFromInternal:(id)a0 serverEnvironment:(long long)a1;
+ (void)setTestGameWith:(id)a0 protocolVersions:(id)a1 andCompletionHandler:(id /* block */)a2;
+ (void)updateGames:(id)a0 withCompletionHandler:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (char)isDaemon;
- (id)initWithInternalRepresentation:(id)a0;
- (char)isSpringBoard;
- (char)isAppStore;
- (void)getGameMatchesForAchievement:(id)a0 handler:(id /* block */)a1;
- (void)getGameMatchesForLeaderboard:(id)a0 handler:(id /* block */)a1;
- (void)getGameMatchesIncludingCompatibleGames:(char)a0 handler:(id /* block */)a1;
- (char)isContacts;
- (char)isGameCenter;
- (char)isGameCenterHostingContainer;
- (char)isGameControllerDaemon;
- (char)isInternalTestApp;
- (char)isNewsApp;

@end
