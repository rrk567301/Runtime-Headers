@class NSString, NSDictionary;

@interface STRestrictionsCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) char contentAndPrivacyRestrictionsEnabled;
@property (readonly) char mediaAndAppleMusicIsRestricted;
@property (readonly) char gameCenterMultiplayerGamesIsRestricted;
@property (readonly) char gameCenterAddingFriendsIsRestricted;
@property (readonly) char gameCenterConnectWithFriendsIsRestricted;
@property (readonly) char gameCenterScreenRecordingIsRestricted;
@property (readonly) char gameCenterNearbyMultiplayerIsRestricted;
@property (readonly) char gameCenterPrivateMessagingIsRestricted;
@property (readonly) char gameCenterProfilePrivacyChangesIsRestricted;
@property (readonly) char gameCenterAvatarAndNicknameChangesIsRestricted;
@property (readonly) long long userAgeGroup;
@property (readonly) char userIsManaged;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
