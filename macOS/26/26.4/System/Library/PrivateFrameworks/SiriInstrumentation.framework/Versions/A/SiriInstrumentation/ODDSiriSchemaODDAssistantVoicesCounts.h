@class NSData, ODDSiriSchemaODDTurnCounts;

@interface ODDSiriSchemaODDAssistantVoicesCounts : SISchemaInstrumentationMessage {
    struct { unsigned char neuralFallbackCount : 1; unsigned char vocalizerFallbackCount : 1; } _has;
}

@property (retain, nonatomic) ODDSiriSchemaODDTurnCounts *turnCounts;
@property (nonatomic) BOOL hasTurnCounts;
@property (nonatomic) unsigned int neuralFallbackCount;
@property (nonatomic) BOOL hasNeuralFallbackCount;
@property (nonatomic) unsigned int vocalizerFallbackCount;
@property (nonatomic) BOOL hasVocalizerFallbackCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNeuralFallbackCount;
- (void)deleteTurnCounts;
- (void)deleteVocalizerFallbackCount;

@end
