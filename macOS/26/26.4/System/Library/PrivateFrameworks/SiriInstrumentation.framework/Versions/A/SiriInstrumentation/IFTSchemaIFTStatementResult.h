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

- (id)suppressMessageUnderConditions;
- (void)deleteExists;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)deletePayload;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteActionEventId;
- (void)deleteOriginProgramStatementId;
- (void)deleteOriginTaskStatementId;
- (void)deleteResultStatementId;
- (void)deleteToolId;

@end
