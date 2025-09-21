@class NSString, IFTSchemaIFTStatementResultPayload, NSData, SISchemaUUID, IFTSchemaIFTStatementId;

@interface IFTSchemaIFTStatementResult : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (retain, nonatomic) IFTSchemaIFTStatementId *resultStatementId;
@property (nonatomic) char hasResultStatementId;
@property (retain, nonatomic) IFTSchemaIFTStatementId *originProgramStatementId;
@property (nonatomic) char hasOriginProgramStatementId;
@property (retain, nonatomic) IFTSchemaIFTStatementResultPayload *payload;
@property (nonatomic) char hasPayload;
@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) char hasToolId;
@property (retain, nonatomic) SISchemaUUID *actionEventId;
@property (nonatomic) char hasActionEventId;
@property (retain, nonatomic) IFTSchemaIFTStatementId *originTaskStatementId;
@property (nonatomic) char hasOriginTaskStatementId;
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
- (void)deleteActionEventId;
- (void)deleteExists;
- (void)deleteOriginProgramStatementId;
- (void)deleteOriginTaskStatementId;
- (void)deletePayload;
- (void)deleteResultStatementId;
- (void)deleteToolId;
- (id)suppressMessageUnderConditions;

@end
