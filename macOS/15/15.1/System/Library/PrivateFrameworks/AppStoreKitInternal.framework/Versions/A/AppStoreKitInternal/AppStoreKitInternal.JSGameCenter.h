@interface AppStoreKitInternal.JSGameCenter : NSObject <_TtP19AppStoreKitInternalP33_7B7F80098AC69273DB70D2D7451E823519JSGameCenterExports_> {
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
