@class NSData, SRSchemaSRCheckErrorResponse;

@interface SRSchemaSRErrorChecked : SISchemaInstrumentationMessage

@property (retain, nonatomic) SRSchemaSRCheckErrorResponse *checkErrorResponse;
@property (nonatomic) BOOL hasCheckErrorResponse;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteCheckErrorResponse;

@end
