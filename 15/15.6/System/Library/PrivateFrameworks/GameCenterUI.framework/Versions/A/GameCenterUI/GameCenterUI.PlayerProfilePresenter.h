@class NSString;

@interface GameCenterUI.PlayerProfilePresenter : GameCenterUI.BaseSplitPresenter {
    void /* unknown type, empty encoding */ profileType;
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ pageMericsPresenter;
    void /* unknown type, empty encoding */ requiredDataPresenter;
    void /* unknown type, empty encoding */ nicknameUpdatedSubscription;
    void /* unknown type, empty encoding */ primarySections;
    void /* unknown type, empty encoding */ secondarySections;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ requiredData;
    void /* unknown type, empty encoding */ onNicknameChanged;
    void /* unknown type, empty encoding */ onShowAvatarEditor;
}

@property (class, nonatomic, readonly) char isSettings;
@property (class, nonatomic, readonly) long long friendRequestsItemTag;

@property (nonatomic, readonly) char wantsHiddenNavigationBar;
@property (nonatomic, readonly) char showRemoveFriendOption;
@property (nonatomic, readonly) char wantsHiddenTitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) char isSignedIn;
@property (nonatomic) void /* unknown type, empty encoding */ isDeeplinked;
@property (nonatomic, retain) void /* unknown type, empty encoding */ nicknamePresenter;
@property (nonatomic) char displayInSplitView;

- (void).cxx_destruct;
- (void)updateSnapshot;
- (id)initWithPlayerId:(id)a0;
- (void)profileSettings;
- (void)didSignOut;
- (void)loadMoreActivityFeedWithContinuationToken:(id)a0;
- (void)removeFriend;
- (void)reportPlayer;
- (void)setAllowsNearByMultiplayerInvites:(char)a0;
- (void)showAvatarEditor;
- (void)showRecentlyPlayedWithFriends;
- (void)signIntoGameCenter;

@end
