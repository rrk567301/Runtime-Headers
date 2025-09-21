@class MHSchemaMHUserEngagementFalseTriggerMitigationScoreGenerated, NSData, MHSchemaMHLatticeFalseTriggerMitigationEnded, MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated;

@interface MHSchemaMHUnintendedResponseSuppressionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char numAsrRecords : 1; unsigned char numTokensTopPath : 1; unsigned char trailingSilenceDurationInNs : 1; } _has;
}

@property (nonatomic) unsigned int numAsrRecords;
@property (nonatomic) char hasNumAsrRecords;
@property (nonatomic) unsigned int numTokensTopPath;
@property (nonatomic) char hasNumTokensTopPath;
@property (nonatomic) unsigned long long trailingSilenceDurationInNs;
@property (nonatomic) char hasTrailingSilenceDurationInNs;
@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated *aftmScore;
@property (nonatomic) char hasAftmScore;
@property (retain, nonatomic) MHSchemaMHLatticeFalseTriggerMitigationEnded *lrnnScore;
@property (nonatomic) char hasLrnnScore;
@property (retain, nonatomic) MHSchemaMHUserEngagementFalseTriggerMitigationScoreGenerated *uemScore;
@property (nonatomic) char hasUemScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAftmScore;
- (void)deleteLrnnScore;
- (void)deleteNumAsrRecords;
- (void)deleteNumTokensTopPath;
- (void)deleteTrailingSilenceDurationInNs;
- (void)deleteUemScore;
- (id)suppressMessageUnderConditions;

@end
