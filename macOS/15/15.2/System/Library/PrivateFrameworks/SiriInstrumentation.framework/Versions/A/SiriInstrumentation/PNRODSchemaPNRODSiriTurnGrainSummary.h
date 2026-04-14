@class PNRODSchemaPNRODMetricDuration, NSData, PNRODSchemaPNRODFailureInfo, SISchemaUUID;

@interface PNRODSchemaPNRODSiriTurnGrainSummary : SISchemaInstrumentationMessage {
    struct { unsigned char status : 1; unsigned char hasAssistantPerformanceData : 1; unsigned char hasDictationPerformanceData : 1; unsigned char hasReliabilityData : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *turnid;
@property (nonatomic) BOOL hasTurnid;
@property (nonatomic) long long status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasAssistantPerformanceData;
@property (nonatomic) BOOL hasHasAssistantPerformanceData;
@property (nonatomic) BOOL hasDictationPerformanceData;
@property (nonatomic) BOOL hasHasDictationPerformanceData;
@property (nonatomic) BOOL hasReliabilityData;
@property (nonatomic) BOOL hasHasReliabilityData;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *srt;
@property (nonatomic) BOOL hasSrt;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *launch;
@property (nonatomic) BOOL hasLaunch;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *epd;
@property (nonatomic) BOOL hasEpd;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *uufr;
@property (nonatomic) BOOL hasUufr;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *ttfw;
@property (nonatomic) BOOL hasTtfw;
@property (retain, nonatomic) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic) BOOL hasFailureInfo;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEpd;
- (void)deleteFailureInfo;
- (void)deleteHasAssistantPerformanceData;
- (void)deleteHasDictationPerformanceData;
- (void)deleteHasReliabilityData;
- (void)deleteLaunch;
- (void)deleteSrt;
- (void)deleteStatus;
- (void)deleteTtfw;
- (void)deleteTurnid;
- (void)deleteUufr;
- (id)suppressMessageUnderConditions;

@end
