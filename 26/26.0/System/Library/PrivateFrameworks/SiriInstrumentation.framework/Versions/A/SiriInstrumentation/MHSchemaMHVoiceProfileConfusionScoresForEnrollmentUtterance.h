@class NSArray, NSData;

@interface MHSchemaMHVoiceProfileConfusionScoresForEnrollmentUtterance : SISchemaInstrumentationMessage {
    struct { unsigned char enrollmentUtteranceNumber : 1; } _has;
}

@property (nonatomic) unsigned int enrollmentUtteranceNumber;
@property (nonatomic) BOOL hasEnrollmentUtteranceNumber;
@property (copy, nonatomic) NSArray *voiceProfileConfusionScores;
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
- (void)addVoiceProfileConfusionScores:(id)a0;
- (void)deleteEnrollmentUtteranceNumber;
- (void)clearVoiceProfileConfusionScores;
- (void)deleteVoiceProfileConfusionScores;
- (id)voiceProfileConfusionScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)voiceProfileConfusionScoresCount;

@end
