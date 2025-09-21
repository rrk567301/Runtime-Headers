@interface PXSharedAlbumsSettings : PXSettings

@property (readonly, nonatomic) char shouldSimulateSharedAlbumsUnavailable;
@property (readonly, nonatomic) char activityEntryAllowsMultipleLikeContributors;
@property (readonly, nonatomic) long long activityEntryAssetsAddedBatchingBehavior;
@property (readonly, nonatomic) long long shelfBehavior;
@property (readonly, nonatomic) char showParticipantCountBadges;
@property (readonly, nonatomic) char lemonadeActivityShelfUseActivityEntries;
@property (readonly, nonatomic) char lemonadeActivityShelfAlwaysAppearUnread;
@property (readonly, nonatomic) char lemonadeActivityShelfAvatarAppearsAsOverlay;
@property (readonly, nonatomic) char lemonadeActivityShelfPreventUpdatingUnreadState;
@property (readonly, nonatomic) long long lemonadeActivityShelfPlaceholderBehavior;
@property (readonly, nonatomic) char lemonadeActivityShelfShouldOpenActivityFeedModallyByItself;
@property (readonly, nonatomic) long long activityEntryFeedLoadMoreBatchSize;
@property (readonly, nonatomic) long long lemonadeActivityFeedMultipleAssetsBehavior;
@property (readonly, nonatomic) char activityEntryFeedUseOnlyCompactCells;
@property (readonly, nonatomic) long long activityEntryFeedCompactCellDisplayStyle;
@property (readonly, nonatomic) char activityEntryFeedAutoplaysVideosInline;
@property (readonly, nonatomic) char activityEntryFeedCompactCellsOpen1upLimitedToEntryAssets;
@property (readonly, nonatomic) char activityEntryFeedFollowsReadableWidth;
@property (readonly, nonatomic) double activityEntryFeedReadableWidth;
@property (readonly, nonatomic) char activityEntryFeedDrawDebugBackgrounds;
@property (readonly, nonatomic) char simulateEmptyActivityEntries;
@property (nonatomic) char allowEmptyAddressesForDebugging;
@property (readonly, nonatomic) char alwaysShowSpatialMediaDataLossAlertForSpatialMedia;
@property (readonly, nonatomic) long long simulatedSubscriptionError;
@property (readonly, nonatomic) char showParticipantSectionHeader;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
