@class NSArray, NSData;

@interface TTSSchemaTTSSpeechFailed : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *errorCodes;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearErrorCodes;
- (unsigned long long)errorCodesCount;
- (void)addErrorCodes:(int)a0;
- (void)deleteErrorCodes;
- (int)errorCodesAtIndex:(unsigned long long)a0;

@end
