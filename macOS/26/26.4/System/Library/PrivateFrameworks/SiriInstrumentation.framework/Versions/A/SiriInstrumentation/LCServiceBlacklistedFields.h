@class NSArray, NSData;

@interface LCServiceBlacklistedFields : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *blackListedFields;
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
- (void)addBlackListedFields:(id)a0;
- (id)blackListedFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)blackListedFieldsCount;
- (void)clearBlackListedFields;
- (void)deleteBlackListedFields;

@end
