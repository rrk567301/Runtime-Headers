@class NSArray, NSData;

@interface LCServiceBlacklistedFields : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *blackListedFields;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)addBlackListedFields:(id)a0;
- (id)blackListedFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)blackListedFieldsCount;
- (void)clearBlackListedFields;
- (void)deleteBlackListedFields;

@end
