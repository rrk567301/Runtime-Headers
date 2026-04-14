@interface GameCenterUI.GameCenterDataUpdatePresenter : NSObject <GKDaemonProxyDataUpdateDelegate> {
    void /* unknown type, empty encoding */ onGameCenterDataUpdate;
}

- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (id)init;
- (void)setBadgeCount:(long long)a0 forType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)friendRequestSelected:(id)a0;
- (void)refreshFriendContents:(id)a0;
- (void)refreshFriendSuggestionContents:(id)a0;

@end
