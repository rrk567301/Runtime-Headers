@class NSArray, NSData;

@interface PRSiriSchemaPRResponseGenerationRequestStart : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionStatementIds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned int)actionStatementIdAtIndex:(unsigned long long)a0;
- (unsigned long long)actionStatementIdCount;
- (void)addActionStatementId:(unsigned int)a0;
- (void)clearActionStatementId;
- (void)deleteActionStatementId;

@end
