@class IFTSchemaIFTStatementOutcome, IFTSchemaIFTResponseManifest, NSData;

@interface IFTSchemaIFTStatementResultPayload : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTStatementOutcome *outcome;
@property (nonatomic) char hasOutcome;
@property (retain, nonatomic) IFTSchemaIFTResponseManifest *response;
@property (nonatomic) char hasResponse;
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
- (void)deleteOutcome;
- (void)deleteResponse;
- (id)suppressMessageUnderConditions;

@end
