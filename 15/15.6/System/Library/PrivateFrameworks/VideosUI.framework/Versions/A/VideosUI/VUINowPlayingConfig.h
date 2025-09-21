@class NSArray, NSDictionary;

@interface VUINowPlayingConfig : NSObject

@property (nonatomic) char showsLozengeForLivePlayback;
@property (nonatomic) char showsUpNextInHUDForVOD;
@property (nonatomic) char showsUpNextInHUDForLive;
@property (nonatomic) char refetchesUpNextDataForVOD;
@property (nonatomic) char refetchesUpNextDataForLive;
@property (nonatomic) char showsStillWatchingAlert;
@property (nonatomic) double stillWatchingAlertDuration;
@property (nonatomic) double alertIdleTimeout;
@property (copy, nonatomic) NSArray *mediaTypesExcludedFromReporting;
@property (nonatomic) char allowQOSReportingForiTunesLibraryPlayback;
@property (nonatomic) char convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;
@property (copy, nonatomic) NSArray *mediaCharacteristicsToLocalize;
@property (copy, nonatomic) NSDictionary *mediaLocalizationKeyMapping;
@property (copy, nonatomic) NSArray *audioIDPrefixes;
@property (nonatomic) double liveSportsStartFromBeginningOffset;
@property (nonatomic) char shouldSendLiveStreamStartAndEndTimesToAVKit;
@property (nonatomic) char shouldAdjustLiveStreamStartTimeToMatchSeekableRangeStartTime;
@property (nonatomic) char shouldAdjustLiveStreamEndTimeToMatchSeekableRangeEndTime;
@property (nonatomic) double liveStreamStartTimeAdjustmentSlopFactor;
@property (nonatomic) double liveStreamStartAndEndTimeBadMetadataCutoff;
@property (nonatomic) double liveStreamOverrunExtension;
@property (nonatomic) double prerollFadeInEndOffset;
@property (nonatomic) char showsLongLoadingAlert;
@property (nonatomic) double longLoadingTimeout;
@property (nonatomic) double smartHapticSyncOffset;

- (id)init;
- (void).cxx_destruct;

@end
