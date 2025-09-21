@class NLXSchemaCDMTurnInput, NSData;

@interface NLXSchemaCDMReformedTurnInputBundle : SISchemaInstrumentationMessage {
    struct { unsigned char type : 1; unsigned char previousTurnsSkip : 1; } _has;
}

@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (retain, nonatomic) NLXSchemaCDMTurnInput *currentTurn;
@property (nonatomic) char hasCurrentTurn;
@property (nonatomic) unsigned int previousTurnsSkip;
@property (nonatomic) char hasPreviousTurnsSkip;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCurrentTurn;
- (void)deletePreviousTurnsSkip;
- (id)suppressMessageUnderConditions;

@end
