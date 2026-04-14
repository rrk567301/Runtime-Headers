@class NSString, SISchemaISOLocale, NSData;

@interface ODDSiriSchemaODDAttentionInvocationDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char dataSharingOptInStatus : 1; unsigned char invocationSource : 1; unsigned char triggerPhrase : 1; unsigned char ageOfProfileInMonths : 1; unsigned char enrollmentPitchEstimation : 1; } _has;
}

@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (nonatomic) int dataSharingOptInStatus;
@property (nonatomic) BOOL hasDataSharingOptInStatus;
@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (copy, nonatomic) NSString *voiceTriggerAssetVersion;
@property (nonatomic) BOOL hasVoiceTriggerAssetVersion;
@property (copy, nonatomic) NSString *mitigationAssetVersion;
@property (nonatomic) BOOL hasMitigationAssetVersion;
@property (nonatomic) int invocationSource;
@property (nonatomic) BOOL hasInvocationSource;
@property (nonatomic) int triggerPhrase;
@property (nonatomic) BOOL hasTriggerPhrase;
@property (nonatomic) unsigned int ageOfProfileInMonths;
@property (nonatomic) BOOL hasAgeOfProfileInMonths;
@property (nonatomic) float enrollmentPitchEstimation;
@property (nonatomic) BOOL hasEnrollmentPitchEstimation;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteEnrollmentPitchEstimation;
- (void)deleteAgeOfProfileInMonths;
- (void)deleteDataSharingOptInStatus;
- (void)deleteInvocationSource;
- (void)deleteMitigationAssetVersion;
- (void)deleteSiriInputLocale;
- (void)deleteSystemBuild;
- (void)deleteTriggerPhrase;
- (void)deleteVoiceTriggerAssetVersion;

@end
