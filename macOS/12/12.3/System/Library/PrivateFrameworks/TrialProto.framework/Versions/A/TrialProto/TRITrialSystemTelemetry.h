@class TRITrialCloudKitContainerOriginFields, NSString, TRITrialDownloadStatusFields, TRITrialAssetPurgeFields, TRITrialOnDemandFactorFields, TRITrialDownloadSettingsFields, TRITrialExperimentFields, TRITrialFactorFields, TRITrialRolloutFields;

@interface TRITrialSystemTelemetry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasClientTeamId;
@property (retain, nonatomic) NSString *clientTeamId;
@property (readonly, nonatomic) BOOL hasClientProjectId;
@property (retain, nonatomic) NSString *clientProjectId;
@property (readonly, nonatomic) BOOL hasExperimentFields;
@property (retain, nonatomic) TRITrialExperimentFields *experimentFields;
@property (readonly, nonatomic) BOOL hasRolloutFields;
@property (retain, nonatomic) TRITrialRolloutFields *rolloutFields;
@property (readonly, nonatomic) BOOL hasClientDeploymentEnv;
@property (retain, nonatomic) NSString *clientDeploymentEnv;
@property (readonly, nonatomic) BOOL hasTrialdTaskName;
@property (retain, nonatomic) NSString *trialdTaskName;
@property (readonly, nonatomic) BOOL hasPrevOsBuild;
@property (retain, nonatomic) NSString *prevOsBuild;
@property (readonly, nonatomic) BOOL hasPrevBcp47DeviceLocale;
@property (retain, nonatomic) NSString *prevBcp47DeviceLocale;
@property (readonly, nonatomic) BOOL hasPrevLanguageCode;
@property (retain, nonatomic) NSString *prevLanguageCode;
@property (readonly, nonatomic) BOOL hasPrevRegionCode;
@property (retain, nonatomic) NSString *prevRegionCode;
@property (readonly, nonatomic) BOOL hasClientDeploymentId;
@property (retain, nonatomic) NSString *clientDeploymentId;
@property (readonly, nonatomic) BOOL hasFactorFields;
@property (retain, nonatomic) TRITrialFactorFields *factorFields;
@property (readonly, nonatomic) BOOL hasDownloadSettingsFields;
@property (retain, nonatomic) TRITrialDownloadSettingsFields *downloadSettingsFields;
@property (readonly, nonatomic) BOOL hasContainerOriginFields;
@property (retain, nonatomic) TRITrialCloudKitContainerOriginFields *containerOriginFields;
@property (readonly, nonatomic) BOOL hasAssetPurgeFields;
@property (retain, nonatomic) TRITrialAssetPurgeFields *assetPurgeFields;
@property (readonly, nonatomic) BOOL hasDownloadStatusFields;
@property (retain, nonatomic) TRITrialDownloadStatusFields *downloadStatusFields;
@property (readonly, nonatomic) BOOL hasOnDemandFactorFields;
@property (retain, nonatomic) TRITrialOnDemandFactorFields *onDemandFactorFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)ensureRolloutFields;
- (id)ensureExperimentFields;
- (id)ensureFactorFields;
- (id)ensureOnDemandFactorFields;
- (id)ensureAssetPurgeFields;
- (void)setFieldsForDownloadOptions:(id)a0;
- (void)setFieldsForRolloutDeployment:(id)a0;

@end
