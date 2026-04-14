@class NSString, IFTSchemaIFTStatementResultPayload, NSData, SISchemaUUID, IFTSchemaIFTStatementId;

@interface IFTSchemaIFTStatementResult : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) IFTSchemaIFTStatementId *resultStatementId;
@property (nonatomic) BOOL hasResultStatementId;
@property (retain, nonatomic) IFTSchemaIFTStatementId *originProgramStatementId;
@property (nonatomic) BOOL hasOriginProgramStatementId;
@property (retain, nonatomic) IFTSchemaIFTStatementResultPayload *payload;
@property (nonatomic) BOOL hasPayload;
@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) BOOL hasToolId;
@property (retain, nonatomic) SISchemaUUID *actionEventId;
@property (nonatomic) BOOL hasActionEventId;
@property (retain, nonatomic) IFTSchemaIFTStatementId *originTaskStatementId;
@property (nonatomic) BOOL hasOriginTaskStatementId;
@property (readonly, nonatomic) NSData *jsonData;

- (void)deleteExists;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void)deletePayload;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteActionEventId;
- (void)deleteOriginProgramStatementId;
- (void)deleteOriginTaskStatementId;
- (void)deleteResultStatementId;
- (void)deleteToolId;

@end
