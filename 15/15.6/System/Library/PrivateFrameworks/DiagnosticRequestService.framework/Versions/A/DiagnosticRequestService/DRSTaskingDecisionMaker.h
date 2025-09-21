@class NSTimeZone, NSString, DRSConfigPersistedStore, DRSTaskingCloudKitHelper, NSDate, DRSTaskingLimitingParameters;

@interface DRSTaskingDecisionMaker : NSObject

@property (retain, nonatomic) NSDate *currentReceivedDate;
@property (readonly, nonatomic) NSTimeZone *deviceTimezone;
@property (readonly, nonatomic) DRSTaskingLimitingParameters *limitingParameters;
@property (readonly, nonatomic) NSString *dbWorkingDirectoryPath;
@property (readonly, nonatomic) DRSConfigPersistedStore *configStore;
@property (readonly, nonatomic) char enforceDate;
@property (readonly, nonatomic) char enforceBuild;
@property (readonly, nonatomic) char enforceSampling;
@property (readonly, nonatomic) char enforceTeamHysteresis;
@property (readonly, nonatomic) char enforceGlobalHysteresisAndCap;
@property (readonly, nonatomic) char allowRefreshLimitingParameters;
@property (readonly, nonatomic) DRSTaskingCloudKitHelper *cloudKitHelper;

+ (char)passesPercentAccept:(double)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)_configDoesPassTeamHysteresis:(id)a0 logTelemetry:(char)a1;
- (id)_configsPassingOverallHysteresis:(id)a0 logTelemetry:(char)a1;
- (id)_configsPassingPerTeamHysteresis:(id)a0 logTelemetry:(char)a1;
- (id)_configsPassingSampling:(id)a0 logTelemetry:(char)a1;
- (id)_hysteresisPredicate:(id)a0;
- (id)_hysteresisPredicate:(id)a0 config:(id)a1;
- (void)_logConfigReceipt:(id)a0;
- (void)_persistReceivedMetadata:(id)a0;
- (void)_rejectTaskingMessageDueToDisabledState:(id)a0 logTelemetry:(char)a1;
- (id)_teamTaskingsPassingBuild:(id)a0 logTelemetry:(char)a1 allowWildcardBuild:(char)a2;
- (id)_teamTaskingsPassingDate:(id)a0 logTelemetry:(char)a1;
- (id)acceptedCancels:(id)a0;
- (id)acceptedConfigs:(id)a0 logTelemetry:(char)a1;
- (id)acceptedConfigs:(id)a0 logTelemetry:(char)a1 allowWildcardBuild:(char)a2;
- (void)clientCompletedConfigUUID:(id)a0;
- (void)clientRejectsConfigUUID:(id)a0;
- (id)initWithTimezone:(id)a0 limitingParameters:(id)a1 dbWorkingDirectoryPath:(id)a2 cloudKitHelper:(id)a3 enforceDate:(char)a4 enforceBuild:(char)a5 enforceSampling:(char)a6 enforceTeamHysteresis:(char)a7 enforceGlobalHysteresisAndCap:(char)a8 allowRefereshLimitingParameters:(char)a9 errorOut:(id *)a10;
- (id)initWithTimezone:(id)a0 limitingParameters:(id)a1 dbWorkingDirectoryPath:(id)a2 cloudKitHelper:(id)a3 enforceDate:(char)a4 enforceBuild:(char)a5 enforceSampling:(char)a6 enforceTeamHysteresis:(char)a7 enforceGlobalHysteresisAndCap:(char)a8 errorOut:(id *)a9;
- (void)refreshLimitingParameters;
- (char)reportToDecisionServer;

@end
