@interface GameStoreKit.GameCenterFriendRequestCoordinator : NSObject <GKDaemonProxyDataUpdateDelegate> {
    void /* unknown type, empty encoding */ onFriendRequestCountDidUpdate;
    void /* unknown type, empty encoding */ currentFriendRequestCount;
    void /* unknown type, empty encoding */ bag;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (id)init;
- (void)accountsDidChangeWithNotification:(id)a0;

@end
