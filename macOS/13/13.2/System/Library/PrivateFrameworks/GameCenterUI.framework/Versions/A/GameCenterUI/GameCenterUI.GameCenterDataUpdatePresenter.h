@interface GameCenterUI.GameCenterDataUpdatePresenter : NSObject <GKDaemonProxyDataUpdateDelegate> {
    void /* unknown type, empty encoding */ onGameCenterDataUpdate;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)setBadgeCount:(long long)a0 forType:(unsigned long long)a1;
- (void)friendRequestSelected:(id)a0;
- (void)refreshFriendContents:(id)a0;

@end
