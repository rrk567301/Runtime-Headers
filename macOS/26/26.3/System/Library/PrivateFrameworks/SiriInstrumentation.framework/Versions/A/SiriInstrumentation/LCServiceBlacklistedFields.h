@class NSArray, NSData;

@interface LCServiceBlacklistedFields : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *blackListedFields;
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
- (void)addBlackListedFields:(id)a0;
- (id)blackListedFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)blackListedFieldsCount;
- (void)clearBlackListedFields;
- (void)deleteBlackListedFields;

@end
