@class _TtC20GameCenterFoundation22GKGroupActivityManager, NSArray, GKGame, NSData, NSError, GKPlayer, GKMatch;

@interface GameCenterFoundation.GKGroupActivityManager : NSObject {
    void /* unknown type, empty encoding */ support;
    void /* unknown type, empty encoding */ groupSessionEligibilityObserver;
    void /* unknown type, empty encoding */ groupSession;
    void /* unknown type, empty encoding */ messenger;
    void /* unknown type, empty encoding */ groupSessionStateAndMessagesObserver;
    void /* unknown type, empty encoding */ inviteesManager;
    void /* unknown type, empty encoding */ cachedDevicePushToken;
    void /* unknown type, empty encoding */ hasRequestedToJoin;
}

@property (class, nonatomic, readonly) _TtC20GameCenterFoundation22GKGroupActivityManager *sharedManager;

- (void)sendWithData:(NSData *)a0 toPlayers:(NSArray *)a1 mode:(long long)a2 completionHandler:(void (^)(NSError *))a3;
- (id)init;
- (void).cxx_destruct;
- (void)resetWithCompletionHandler:(void (^)(void))a0;
- (void)applicationWillTerminate;
- (void)activateWithGame:(GKGame *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)endWithCompletionHandler:(void (^)(void))a0;
- (BOOL)isEligibleForGroupSession;
- (void)leaveWithCompletionHandler:(void (^)(void))a0;
- (void)playerDisconnectWithPlayer:(GKPlayer *)a0 completionHandler:(void (^)(void))a1;
- (void)startGame;
- (void)startLookingForSessions;
- (void)updateWithMatch:(GKMatch *)a0 completionHandler:(void (^)(void))a1;

@end
