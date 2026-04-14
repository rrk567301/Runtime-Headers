@class NSArray, NSData;

@interface TTSSchemaTTSSynthesisFailed : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *errorCodes;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)errorCodesCount;
- (void)clearErrorCodes;
- (void)addErrorCodes:(int)a0;
- (void)deleteErrorCodes;
- (int)errorCodesAtIndex:(unsigned long long)a0;

@end
