@interface PXMemoriesRelatedSettings : PXSettings

@property (nonatomic) char enableMemoriesLivingOnFeedback;
@property (nonatomic) char fakePeopleProximity;
@property (nonatomic) char showLocalMemories;
@property (nonatomic) char useOnlyMusicForTopicInTopPickSuggestions;
@property (nonatomic) char includeChillMixInMusicForYou;
@property (nonatomic) char includeGetUpMixInMusicForYou;
@property (nonatomic) double refreshPhotoKitTimeout;
@property (nonatomic) double widgetRefreshTimeInterval;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForInterestingMoments;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForMemories;
@property (nonatomic) long long minimumNumberOfCuratedAssetsForMovieHeader;
@property (nonatomic) unsigned long long deleteBehavior;
@property (nonatomic) char recoverBlacklistedMemories;
@property (nonatomic) char showMemoryTitleLayer;
@property (nonatomic) char enableIPadWideHeader;
@property (nonatomic) long long subtitleFontSize;
@property (nonatomic) unsigned long long timelineContentMode;
@property (nonatomic) unsigned long long widgetSize;
@property (nonatomic) unsigned long long timelineSchedulerMode;
@property (nonatomic) char enableDiscoveryFeed;
@property (nonatomic) unsigned long long discoveryRankingMode;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (char)isAssetCountAcceptableForMemoryLensPlayback:(long long)a0;
+ (char)isAssetCountAcceptableForMemoryPlayback:(long long)a0;
+ (id)schedulerOptionsFromTimelineSchedulerMode:(unsigned long long)a0;

- (void)setDefaultValues;
- (id)parentSettings;
- (void)performPostSaveActions;

@end
