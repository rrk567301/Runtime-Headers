@class NSArray, NSData;

@interface IFPlatformRequestSchemaIFPlatformRequestStructuredError : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *errors;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearErrors;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addErrors:(id)a0;
- (id)errorsAtIndex:(unsigned long long)a0;
- (unsigned long long)errorsCount;
- (void)deleteErrors;

@end
