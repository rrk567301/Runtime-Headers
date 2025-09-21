@class NSArray, NSData, SISchemaUUID;

@interface TTMSchemaTTMOverrideTCUFailure : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *tcuId;
@property (nonatomic) BOOL hasTcuId;
@property (copy, nonatomic) NSArray *failures;
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
- (unsigned long long)failuresCount;
- (void)addFailures:(id)a0;
- (void)clearFailures;
- (void)deleteFailures;
- (void)deleteTcuId;
- (id)failuresAtIndex:(unsigned long long)a0;

@end
