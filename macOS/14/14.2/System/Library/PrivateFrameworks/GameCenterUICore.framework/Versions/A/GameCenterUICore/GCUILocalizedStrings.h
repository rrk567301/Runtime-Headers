@class NSString;

@interface GCUILocalizedStrings : NSObject

@property (class, nonatomic, readonly) NSString *ACHIEVEMENT_PENDING_APPROVAL;
@property (class, nonatomic, readonly) NSString *DEVELOPER;
@property (class, nonatomic, readonly) NSString *FRIEND_INVITE_CODE_FETCH_IN_PROGRESS_ERROR;
@property (class, nonatomic, readonly) NSString *GAME_CENTER;
@property (class, nonatomic, readonly) NSString *GAME_CENTER_FRIEND_REQUEST_ACCEPTED;
@property (class, nonatomic, readonly) NSString *LEADERBOARD_PENDING_APPROVAL;
@property (class, nonatomic, readonly) NSString *NO_FRIENDS_EMPTY_STATE_DESCRIPTION;
@property (class, nonatomic, readonly) NSString *PLAYER_CARD_BUTTON_INVITE;
@property (class, nonatomic, readonly) NSString *PLAYER_PICKER_NEARBY_OR_BOOP_INSTRUCTIONAL_MESSAGE;
@property (class, nonatomic, readonly) NSString *PLAYER_PICKER_NEARBY_OR_BOOP_INSTRUCTIONAL_MESSAGE_WLAN;
@property (class, nonatomic, readonly) NSString *PRERELEASE_ITEM;
@property (class, nonatomic, readonly) NSString *READY_FOR_REVIEW;
@property (class, nonatomic, readonly) NSString *RETRY;
@property (class, nonatomic, readonly) NSString *SIGN_IN_BANNER_TITLE;
@property (class, nonatomic, readonly) NSString *SIGN_IN_BANNER_SUBTITLE;
@property (class, nonatomic, readonly) NSString *SIGN_IN_TITLE_MESSAGE;
@property (class, nonatomic, readonly) NSString *SIGN_IN_WITH_APPLEID_BUTTON_TITLE;
@property (class, nonatomic, readonly) NSString *SIGN_IN_BUTTON_TITLE;
@property (class, nonatomic, readonly) NSString *SIGN_IN_PROMPT_MESSAGE_TEXT;
@property (class, nonatomic, readonly) NSString *SIGN_IN_PROMPT_MESSAGE_TEXT_WITH_APPLEID;
@property (class, nonatomic, readonly) NSString *FRIENDS_WHO_HAVE_THIS;
@property (class, nonatomic, readonly) NSString *FRIEND_WHO_EARNED_THIS_SECTION_SHOW_MORE_TITLE;
@property (class, nonatomic, readonly) NSString *FRIEND_WHO_EARNED_THIS_SECTION_SHOW_LESS_TITLE;

+ (id)LEADERBOARD_LIST_ITEM_SUBTITLE_FRIENDS_PLAYINGWithCOUNT:(long long)a0;
+ (id)FRIEND_WHO_EARNED_THIS_AVATAR_COUNTWithCOUNT:(long long)a0;
+ (id)FRIEND_WHO_EARNED_THIS_HOUR_AGOWithHr:(long long)a0;
+ (id)FRIEND_WHO_EARNED_THIS_SEC_AGOWithSec:(long long)a0;
+ (id)FRIEND_WHO_EARNED_THIS_DAY_AGOWithDay:(long long)a0;
+ (id)FRIEND_WHO_EARNED_THIS_MIN_AGOWithMin:(long long)a0;
+ (id)FRIEND_WHO_EARNED_THIS_WEEK_AGOWithWeek:(long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
