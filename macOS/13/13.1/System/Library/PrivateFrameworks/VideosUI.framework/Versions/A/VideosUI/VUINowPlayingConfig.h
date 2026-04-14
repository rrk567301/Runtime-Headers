@class NSArray, NSDictionary;

@interface VUINowPlayingConfig : NSObject

@property (nonatomic) BOOL showsLozengeForLivePlayback;
@property (nonatomic) BOOL showsUpNextInHUDForVOD;
@property (nonatomic) BOOL showsUpNextInHUDForLive;
@property (nonatomic) BOOL refetchesUpNextDataForVOD;
@property (nonatomic) BOOL refetchesUpNextDataForLive;
@property (nonatomic) BOOL showsStillWatchingAlert;
@property (nonatomic) double stillWatchingAlertDuration;
@property (nonatomic) double alertIdleTimeout;
@property (copy, nonatomic) NSArray *mediaTypesExcludedFromReporting;
@property (nonatomic) BOOL allowQOSReportingForiTunesLibraryPlayback;
@property (nonatomic) BOOL convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;
@property (copy, nonatomic) NSArray *mediaCharacteristicsToLocalize;
@property (copy, nonatomic) NSDictionary *mediaLocalizationKeyMapping;

- (id)init;
- (void).cxx_destruct;

@end
