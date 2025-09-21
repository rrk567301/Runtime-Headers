@class NSArray, NSData;

@interface IDENTITYSchemaIDENTITYVoiceScoreCard : SISchemaInstrumentationMessage {
    struct { unsigned char classification : 1; } _has;
}

@property (copy, nonatomic) NSArray *identityScores;
@property (nonatomic) int classification;
@property (nonatomic) char hasClassification;
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
- (void)addIdentityScores:(id)a0;
- (void)clearIdentityScores;
- (void)deleteClassification;
- (void)deleteIdentityScores;
- (id)identityScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)identityScoresCount;
- (id)suppressMessageUnderConditions;

@end
