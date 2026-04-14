@interface GameStoreKit.JSGameCenter : NSObject <_TtP12GameStoreKitP33_EFE7DA64944D7D961A0763ED824646FB19JSGameCenterExports_> {
    void /* unknown type, empty encoding */ dataProvider;
}

- (id)init;
- (void).cxx_destruct;
- (id)fetchAchievementSummaryForGame:(id)a0;
- (id)fetchFriendsThatPlayGame:(id)a0;
- (id)fetchGameInfo:(id)a0;
- (id)fetchGamesPopularWithFriends:(id)a0 :(long long)a1;
- (id)fetchRecentlyPlayedGamesWithinSeconds:(id)a0 :(long long)a1 :(long long)a2;
- (id)fetchRengagementDataForLocalPlayer;

@end
