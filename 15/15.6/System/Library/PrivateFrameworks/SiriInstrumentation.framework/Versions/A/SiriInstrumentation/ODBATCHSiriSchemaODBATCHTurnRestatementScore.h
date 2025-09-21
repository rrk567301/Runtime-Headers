@class NSData, SISchemaUUID;

@interface ODBATCHSiriSchemaODBATCHTurnRestatementScore : SISchemaInstrumentationMessage {
    struct { unsigned char utteranceRestatementScore : 1; unsigned char semanticSimilarityScore : 1; unsigned char isCrossDevice : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *currentTurnId;
@property (nonatomic) char hasCurrentTurnId;
@property (retain, nonatomic) SISchemaUUID *nextTurnId;
@property (nonatomic) char hasNextTurnId;
@property (nonatomic) double utteranceRestatementScore;
@property (nonatomic) char hasUtteranceRestatementScore;
@property (nonatomic) double semanticSimilarityScore;
@property (nonatomic) char hasSemanticSimilarityScore;
@property (nonatomic) char isCrossDevice;
@property (nonatomic) char hasIsCrossDevice;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUtteranceRestatementScore;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCurrentTurnId;
- (void)deleteIsCrossDevice;
- (void)deleteNextTurnId;
- (void)deleteSemanticSimilarityScore;
- (id)suppressMessageUnderConditions;

@end
