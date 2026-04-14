@class NSArray, NSData;

@interface LCServiceBlacklistedFields : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *blackListedFields;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearBlackListedFields;
- (void)addBlackListedFields:(id)a0;
- (void)deleteBlackListedFields;
- (unsigned long long)blackListedFieldsCount;
- (id)blackListedFieldsAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
