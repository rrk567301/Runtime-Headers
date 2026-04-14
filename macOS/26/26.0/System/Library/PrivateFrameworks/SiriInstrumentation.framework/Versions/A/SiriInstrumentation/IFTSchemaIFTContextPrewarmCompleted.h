@class NSData, SISchemaUUID;

@interface IFTSchemaIFTContextPrewarmCompleted : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originatingPrewarmRequestId;
@property (nonatomic) BOOL hasOriginatingPrewarmRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteOriginatingPrewarmRequestId;

@end
