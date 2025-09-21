@class NSString, GKAchievementInternal, GKGame, NSDate, NSArray, GKPlayer;

@interface GKAchievement : NSObject <NSCopying, NSCoding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *playerID;
@property (retain) GKAchievementInternal *internal;
@property (copy) NSDate *lastReportedDate;
@property (getter=isHidden) char hidden;
@property (readonly, copy) NSString *groupIdentifier;
@property (retain) GKGame *game;
@property (retain) NSArray *friendsWhoHaveThis;
@property (retain) GKAchievementInternal *internal;
@property (copy) NSDate *lastReportedDate;
@property (getter=isHidden) char hidden;
@property (readonly, copy) NSString *groupIdentifier;
@property (retain) GKGame *game;
@property (retain) NSArray *friendsWhoHaveThis;
@property (copy) NSString *identifier;
@property double percentComplete;
@property (readonly, getter=isCompleted) char completed;
@property char showsCompletionBanner;
@property (readonly) GKPlayer *player;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (char)instancesRespondToSelector:(SEL)a0;
+ (void)loadAchievementWithID:(id)a0 forGame:(id)a1 players:(id)a2 complete:(id /* block */)a3;
+ (void)reportAchievements:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)descriptionForAchievement:(id)a0 achievementDescriptions:(id)a1;
+ (void)loadAchievementsForGameV2:(id)a0 player:(id)a1 includeUnreported:(char)a2 includeHidden:(char)a3 withCompletionHandler:(id /* block */)a4;
+ (void)loadAchievementsForGameV2:(id)a0 players:(id)a1 includeUnreported:(char)a2 includeHidden:(char)a3 withCompletionHandler:(id /* block */)a4;
+ (void)loadAchievementsWithCompletionHandler:(id /* block */)a0;
+ (void)reportAchievements:(id)a0 whileScreeningChallenges:(char)a1 withEligibleChallenges:(id)a2 withCompletionHandler:(id /* block */)a3;
+ (void)resetAchievementsWithCompletionHandler:(id /* block */)a0;
+ (char)shouldShowBannerOnReport:(id)a0 achievementDescription:(id)a1 reportedAchievements:(id)a2;
+ (char)shouldShowBannerOnReport:(id)a0 achievementDescription:(id)a1 reportedAchievements:(id)a2 uiFrameworkMethodsRequired:(char)a3;
+ (char)shouldShowBannerOnReport:(id)a0 reportedAchievements:(id)a1;
+ (char)shouldShowBannerOnReport:(id)a0 reportedAchievements:(id)a1 uiFrameworkMethodsRequired:(char)a2;
+ (char)showBannerIsSupported;

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
- (id)initWithIdentifier:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithInternalRepresentation:(id)a0;
- (id)playerID;
- (id)initWithIdentifier:(id)a0 player:(id)a1 percentComplete:(double)a2 lastReportedDate:(id)a3;
- (id)_achievementDescription;
- (id)initWithIdentifier:(id)a0 forPlayer:(id)a1;
- (id)initWithIdentifier:(id)a0 player:(id)a1;
- (id)initWithInternalRepresentation:(id)a0 playerID:(id)a1;
- (void)reportAchievementWithCompletionHandler:(id /* block */)a0;

@end
