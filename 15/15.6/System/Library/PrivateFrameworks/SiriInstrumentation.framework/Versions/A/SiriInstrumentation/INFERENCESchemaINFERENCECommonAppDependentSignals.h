@class INFERENCESchemaINFERENCECommonAppDependentEntityFrequencyAndRecencySignals, NSString, INFERENCESchemaINFERENCECommonAppDependentFrequencyAndRecencySignals, NSData;

@interface INFERENCESchemaINFERENCECommonAppDependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char isFirstPartyBundle : 1; unsigned char isForegroundApp : 1; unsigned char isResolvedApp : 1; unsigned char appScoreFromModel : 1; unsigned char compoundActiveBundleScore : 1; unsigned char totalTimeSpentByUserInAppPerDay : 1; unsigned char timeSpentByUserInAppToday : 1; unsigned char timeSinceAppLastLaunchedInSec : 1; } _has;
}

@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) char hasAppBundleId;
@property (nonatomic) char isFirstPartyBundle;
@property (nonatomic) char hasIsFirstPartyBundle;
@property (nonatomic) char isForegroundApp;
@property (nonatomic) char hasIsForegroundApp;
@property (nonatomic) char isResolvedApp;
@property (nonatomic) char hasIsResolvedApp;
@property (nonatomic) float appScoreFromModel;
@property (nonatomic) char hasAppScoreFromModel;
@property (nonatomic) double compoundActiveBundleScore;
@property (nonatomic) char hasCompoundActiveBundleScore;
@property (nonatomic) unsigned int totalTimeSpentByUserInAppPerDay;
@property (nonatomic) char hasTotalTimeSpentByUserInAppPerDay;
@property (nonatomic) unsigned int timeSpentByUserInAppToday;
@property (nonatomic) char hasTimeSpentByUserInAppToday;
@property (nonatomic) int timeSinceAppLastLaunchedInSec;
@property (nonatomic) char hasTimeSinceAppLastLaunchedInSec;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppDependentFrequencyAndRecencySignals *appDependentFrequencyAndRecencySignals;
@property (nonatomic) char hasAppDependentFrequencyAndRecencySignals;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppDependentEntityFrequencyAndRecencySignals *appDependentEntityFrequencyAndRecencySignals;
@property (nonatomic) char hasAppDependentEntityFrequencyAndRecencySignals;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCompoundActiveBundleScore;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteTimeSpentByUserInAppToday;
- (void)deleteAppBundleId;
- (void)deleteAppDependentEntityFrequencyAndRecencySignals;
- (void)deleteAppDependentFrequencyAndRecencySignals;
- (void)deleteAppScoreFromModel;
- (void)deleteIsFirstPartyBundle;
- (void)deleteIsForegroundApp;
- (void)deleteIsResolvedApp;
- (void)deleteTimeSinceAppLastLaunchedInSec;
- (void)deleteTotalTimeSpentByUserInAppPerDay;
- (id)suppressMessageUnderConditions;

@end
