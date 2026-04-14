@class NSArray, NSData;

@interface POMMESSchemaPOMMESPegasusResponseServerDrivenContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *catIds;
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
- (void)addCatId:(id)a0;
- (id)catIdAtIndex:(unsigned long long)a0;
- (unsigned long long)catIdCount;
- (void)clearCatId;
- (void)deleteCatId;

@end
