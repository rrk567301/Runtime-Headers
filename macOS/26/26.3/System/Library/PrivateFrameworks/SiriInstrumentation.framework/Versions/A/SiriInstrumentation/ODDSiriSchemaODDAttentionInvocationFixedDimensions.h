@class NSString, ODDSiriSchemaODDFixedDimensions, NSArray, NSData, SISchemaISOLocale;

@interface ODDSiriSchemaODDAttentionInvocationFixedDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char dataSharingOptInStatus : 1; unsigned char ageOfProfileInMonths : 1; unsigned char enrollmentPitchEstimation : 1; unsigned char enrollmentUtteranceCount : 1; unsigned char jsEnrollmentUtteranceCount : 1; unsigned char lowEnrollmentSpeakerSimilarityScoreCounts : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDFixedDimensions *fixedDimensions;
@property (nonatomic) BOOL hasFixedDimensions;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (nonatomic) int dataSharingOptInStatus;
@property (nonatomic) BOOL hasDataSharingOptInStatus;
@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (nonatomic) unsigned int ageOfProfileInMonths;
@property (nonatomic) BOOL hasAgeOfProfileInMonths;
@property (nonatomic) float enrollmentPitchEstimation;
@property (nonatomic) BOOL hasEnrollmentPitchEstimation;
@property (nonatomic) unsigned int enrollmentUtteranceCount;
@property (nonatomic) BOOL hasEnrollmentUtteranceCount;
@property (nonatomic) unsigned int jsEnrollmentUtteranceCount;
@property (nonatomic) BOOL hasJsEnrollmentUtteranceCount;
@property (copy, nonatomic) NSArray *snrOfEnrollmentUtterances;
@property (copy, nonatomic) NSArray *werEnrollmentUtterances;
@property (nonatomic) unsigned int lowEnrollmentSpeakerSimilarityScoreCounts;
@property (nonatomic) BOOL hasLowEnrollmentSpeakerSimilarityScoreCounts;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteEnrollmentPitchEstimation;
- (void)deleteSnrOfEnrollmentUtterances;
- (float)werEnrollmentUtterancesAtIndex:(unsigned long long)a0;
- (void)addSnrOfEnrollmentUtterances:(float)a0;
- (void)addWerEnrollmentUtterances:(float)a0;
- (void)clearSnrOfEnrollmentUtterances;
- (void)clearWerEnrollmentUtterances;
- (void)deleteAgeOfProfileInMonths;
- (void)deleteDataSharingOptInStatus;
- (void)deleteEnrollmentUtteranceCount;
- (void)deleteFixedDimensions;
- (void)deleteJsEnrollmentUtteranceCount;
- (void)deleteLowEnrollmentSpeakerSimilarityScoreCounts;
- (void)deleteSiriInputLocale;
- (void)deleteSystemBuild;
- (void)deleteWerEnrollmentUtterances;
- (float)snrOfEnrollmentUtterancesAtIndex:(unsigned long long)a0;
- (unsigned long long)snrOfEnrollmentUtterancesCount;
- (unsigned long long)werEnrollmentUtterancesCount;

@end
