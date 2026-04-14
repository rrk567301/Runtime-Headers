@class IFTSchemaIFTStatementOutcome, IFTSchemaIFTResponseManifest, NSData;

@interface IFTSchemaIFTStatementResultPayload : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTStatementOutcome *outcome;
@property (nonatomic) BOOL hasOutcome;
@property (retain, nonatomic) IFTSchemaIFTResponseManifest *response;
@property (nonatomic) BOOL hasResponse;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteOutcome;
- (void)deleteResponse;

@end
