@class NSURL, _TtC7GameKit21GSGameActivitySupport, NSDate, NSDictionary, GKLeaderboard, GKPlayer, GKMatch, NSString, NSSet, GKAchievementDescription, GKGameActivityDefinition, NSArray, NSError;
@protocol OS_dispatch_source_timer;

@interface GKGameActivity : NSObject {
    void /* unknown type, empty encoding */ _instanceSnapshot;
    void /* unknown type, empty encoding */ subscriptions;
    void /* function */ identifier;
    void /* unknown type, empty encoding */ _achievements;
    void /* unknown type, empty encoding */ _leaderboardScores;
    void /* function */ participants;
    void /* function */ participantStates;
    void /* function */ consumptionState;
    void /* unknown type, empty encoding */ updateTrigger;
}

@property (class, nonatomic, readonly) NSArray *validPartyCodeAlphabet;

@property (nonatomic, retain) id<OS_dispatch_source_timer> gsTimer;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) GKGameActivityDefinition *activityDefinition;
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) NSString *partyCode;
@property (nonatomic, readonly) NSURL *partyURL;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *lastResumeDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSSet *achievements;
@property (nonatomic, readonly) NSSet *leaderboardScores;
@property (nonatomic, readonly) GKPlayer *creator;
@property (nonatomic, readonly) BOOL initiatedByApple;
@property (nonatomic, readonly) GKLeaderboard *referralLeaderboard;
@property (nonatomic, readonly) GKAchievementDescription *referralAchievement;
@property (nonatomic, readonly) NSSet *participants;
@property (nonatomic, readonly) NSDictionary *participantStates;
@property (nonatomic, readonly) NSString *shortGroupID;
@property (nonatomic, readonly) NSString *consumptionState;
@property (nonatomic, readonly) _TtC7GameKit21GSGameActivitySupport *support;
@property (nonatomic, retain) NSDate *lastUpdateTime;

+ (void)checkPendingGameActivityExistenceWithCompletionHandler:(void (^)(BOOL))a0;
+ (void)createFromGameActivityInstance:(id)a0 completionHandler:(void (^)(GKGameActivity *, NSError *))a1;
+ (BOOL)isValidPartyCode:(id)a0;
+ (id)startWithDefinition:(id)a0 error:(id *)a1;
+ (id)startWithDefinition:(id)a0 partyCode:(id)a1 error:(id *)a2;

- (void)pause;
- (void)end;
- (void)start;
- (id)initWithDefinition:(id)a0;
- (void)resume;
- (id)init;
- (void).cxx_destruct;
- (void)markAsProcessed;
- (void)findMatchWithCompletionHandler:(void (^)(GKMatch *, NSError *))a0;
- (id)fallbackPartyURL;
- (void)findPlayersForHostedMatchWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;
- (double)getProgressOnAchievement:(id)a0;
- (id)getScoreOnLeaderboard:(id)a0;
- (id)initWithIdentifier:(id)a0 activityDefinition:(id)a1 properties:(id)a2 state:(unsigned long long)a3 partyCode:(id)a4 creationDate:(id)a5 startDate:(id)a6 lastResumeDate:(id)a7 endDate:(id)a8 duration:(double)a9 achievements:(id)a10 leaderboardScores:(id)a11 creator:(id)a12 initiatedByApple:(BOOL)a13 referralLeaderboard:(id)a14 referralAchievement:(id)a15 participants:(id)a16 participantStates:(id)a17 shortGroupID:(id)a18 consumptionState:(id)a19 support:(id)a20 error:(id *)a21;
- (id)makeMatchRequest;
- (void)removeAchievements:(id)a0;
- (void)removeScoresFromLeaderboards:(id)a0;
- (void)setAchievementCompleted:(id)a0;
- (void)setProgressOnAchievement:(id)a0 toPercentComplete:(double)a1;
- (void)setScoreOnLeaderboard:(id)a0 toScore:(long long)a1;
- (void)setScoreOnLeaderboard:(id)a0 toScore:(long long)a1 context:(long long)a2;
- (void)setupUpdateSubscription;

@end
