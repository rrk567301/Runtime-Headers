@class TRITrialCloudKitContainerOriginFields, NSString, TRITrialMobileAssetOriginFields, TRITrialDownloadStatusFields, TRITrialAssetPurgeFields, TRITrialOnDemandFactorFields, TRITrialDownloadSettingsFields, TRITrialExperimentFields, TRITrialFactorFields, TRITrialBMLTFields, TRITrialRolloutFields;

@interface TRITrialSystemTelemetry : PBCodable <NSCopying> {
    struct { unsigned char prevExperimentOptOutStatus : 1; } _has;
}

@property (readonly, nonatomic) char hasClientTeamId;
@property (retain, nonatomic) NSString *clientTeamId;
@property (readonly, nonatomic) char hasClientProjectId;
@property (retain, nonatomic) NSString *clientProjectId;
@property (readonly, nonatomic) char hasExperimentFields;
@property (retain, nonatomic) TRITrialExperimentFields *experimentFields;
@property (readonly, nonatomic) char hasRolloutFields;
@property (retain, nonatomic) TRITrialRolloutFields *rolloutFields;
@property (readonly, nonatomic) char hasClientDeploymentEnv;
@property (retain, nonatomic) NSString *clientDeploymentEnv;
@property (readonly, nonatomic) char hasTrialdTaskName;
@property (retain, nonatomic) NSString *trialdTaskName;
@property (readonly, nonatomic) char hasPrevOsBuild;
@property (retain, nonatomic) NSString *prevOsBuild;
@property (readonly, nonatomic) char hasPrevBcp47DeviceLocale;
@property (retain, nonatomic) NSString *prevBcp47DeviceLocale;
@property (readonly, nonatomic) char hasPrevLanguageCode;
@property (retain, nonatomic) NSString *prevLanguageCode;
@property (readonly, nonatomic) char hasPrevRegionCode;
@property (retain, nonatomic) NSString *prevRegionCode;
@property (readonly, nonatomic) char hasClientDeploymentId;
@property (retain, nonatomic) NSString *clientDeploymentId;
@property (readonly, nonatomic) char hasFactorFields;
@property (retain, nonatomic) TRITrialFactorFields *factorFields;
@property (readonly, nonatomic) char hasDownloadSettingsFields;
@property (retain, nonatomic) TRITrialDownloadSettingsFields *downloadSettingsFields;
@property (readonly, nonatomic) char hasContainerOriginFields;
@property (retain, nonatomic) TRITrialCloudKitContainerOriginFields *containerOriginFields;
@property (readonly, nonatomic) char hasAssetPurgeFields;
@property (retain, nonatomic) TRITrialAssetPurgeFields *assetPurgeFields;
@property (readonly, nonatomic) char hasDownloadStatusFields;
@property (retain, nonatomic) TRITrialDownloadStatusFields *downloadStatusFields;
@property (readonly, nonatomic) char hasOnDemandFactorFields;
@property (retain, nonatomic) TRITrialOnDemandFactorFields *onDemandFactorFields;
@property (readonly, nonatomic) char hasPrevCarrierCountryIsoCode;
@property (retain, nonatomic) NSString *prevCarrierCountryIsoCode;
@property (readonly, nonatomic) char hasPrevCarrierBundleIdentifier;
@property (retain, nonatomic) NSString *prevCarrierBundleIdentifier;
@property (nonatomic) char hasPrevExperimentOptOutStatus;
@property (nonatomic) char prevExperimentOptOutStatus;
@property (readonly, nonatomic) char hasMobileAssetOriginFields;
@property (retain, nonatomic) TRITrialMobileAssetOriginFields *mobileAssetOriginFields;
@property (readonly, nonatomic) char hasBmltFields;
@property (retain, nonatomic) TRITrialBMLTFields *bmltFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)ensureAssetPurgeFields;
- (id)ensureBMLTFields;
- (id)ensureExperimentFields;
- (id)ensureFactorFields;
- (id)ensureMobileAssetOriginFields;
- (id)ensureOnDemandFactorFields;
- (id)ensureRolloutFields;
- (void)setFieldsForDownloadOptions:(id)a0;
- (void)setFieldsForRolloutDeployment:(id)a0;

@end
