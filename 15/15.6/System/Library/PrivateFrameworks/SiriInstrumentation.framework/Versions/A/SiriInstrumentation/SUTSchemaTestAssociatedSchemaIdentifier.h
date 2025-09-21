@class NSData, SUTSchemaTestGeneratedTurnID, SUTSchemaTestGeneratedRequestId;

@interface SUTSchemaTestAssociatedSchemaIdentifier : SISchemaInstrumentationMessage

@property (retain, nonatomic) SUTSchemaTestGeneratedTurnID *turnID;
@property (nonatomic) char hasTurnID;
@property (retain, nonatomic) SUTSchemaTestGeneratedRequestId *requestId;
@property (nonatomic) char hasRequestId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichIdentifier_Type;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestId;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteTurnID;
- (id)suppressMessageUnderConditions;

@end
