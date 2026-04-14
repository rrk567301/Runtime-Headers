@class NSData, SUTSchemaTestGeneratedTurnID, SUTSchemaTestGeneratedRequestId;

@interface SUTSchemaTestAssociatedSchemaIdentifier : SISchemaInstrumentationMessage

@property (retain, nonatomic) SUTSchemaTestGeneratedTurnID *turnID;
@property (nonatomic) BOOL hasTurnID;
@property (retain, nonatomic) SUTSchemaTestGeneratedRequestId *requestId;
@property (nonatomic) BOOL hasRequestId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichIdentifier_Type;

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
- (void)deleteRequestId;
- (void)deleteTurnID;

@end
