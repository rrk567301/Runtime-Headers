@class _TtC20GameCenterFoundation22GKGroupActivityManager;

@interface GameCenterFoundation.GKGroupActivityManager : NSObject {
    void /* unknown type, empty encoding */ _groupSession;
    void /* unknown type, empty encoding */ messenger;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ inviteeIDs;
    void /* unknown type, empty encoding */ devicePushToken;
    void /* unknown type, empty encoding */ tasks;
    void /* unknown type, empty encoding */ matchInfo;
    void /* unknown type, empty encoding */ sessionStateObserver;
}

@property (class, nonatomic, readonly) _TtC20GameCenterFoundation22GKGroupActivityManager *sharedManager;

- (void)sendDataWithData:(id)a0 toPlayers:(id)a1;
- (void)receiveDataWithData:(id)a0 fromPlayer:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)end;
- (void)leave;
- (void)applicationWillTerminate;
- (void)activateForGameWithGame:(id)a0;
- (void)startLookingForSessions;
- (void)startGame;
- (void)updateWithMatch:(id)a0;

@end
