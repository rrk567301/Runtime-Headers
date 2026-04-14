@class NSArray, NSData;

@interface IDENTITYSchemaIDENTITYVoiceScoreCard : SISchemaInstrumentationMessage {
    struct { unsigned char classification : 1; } _has;
}

@property (copy, nonatomic) NSArray *identityScores;
@property (nonatomic) int classification;
@property (nonatomic) BOOL hasClassification;
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
- (void)addIdentityScores:(id)a0;
- (void)clearIdentityScores;
- (void)deleteClassification;
- (void)deleteIdentityScores;
- (id)identityScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)identityScoresCount;

@end
